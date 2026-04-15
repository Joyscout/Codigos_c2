#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_COMPUTADORES  15 
#define LIMITE_INATIVIDADE  20  
#define CONSUMO_LIGADO     150  
#define CONSUMO_HIBERNANDO   5  
#define CICLO_SIMULACAO      5 

// função que limpa a tela
void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//    limparTela(); <- codigo de limpar a tela

typedef struct {
    int   id;
    int   estado;
    int   tempo_inativo;
    float consumo_watts;
    int   prioritaria;     
    char  historico[300];   
} Computador;

void  inicializar_lab    (Computador lab[], int n);
void  monitorar          (Computador lab[], int n);
void  exibir_status      (Computador lab[], int n);
float calcular_consumo   (Computador lab[], int n);
float calcular_economia  (Computador lab[], int n);
void  simular_atividade  (Computador lab[], int n, int id);
void  definir_prioritaria(Computador lab[], int id);
void  ligar_maquina      (Computador lab[], int id);
void  gerar_relatorio    (Computador lab[], int n);
void  menu               (Computador lab[], int n);
void  registrar_evento   (Computador *pc, const char *evento);
int   validar_id         (int id, int min, int max);
void  aguardar_enter     ();


// --- FUNÇÃO I: INICIAR LAB ---
void inicializar_lab(Computador lab[], int n) { 
    int x;
    for (x = 0; x < n; x++) {
        lab[x].id = x + 1;
        lab[x].estado = 1;              // Inicia tudo ligado
        lab[x].tempo_inativo = 0;
        lab[x].prioritaria = 0;         // Por padrão, não prioritária
        lab[x].consumo_watts = CONSUMO_LIGADO;      // Consumo padrão ligado
        lab[x].historico[0] = '\0';                   
        registrar_evento(&lab[x], "Inicializado");
    }
}


// --- FUNÇÃO II: MONITORAR MÁQUINAS ---
void monitorar(Computador lab[], int n) {
    int x;
    for (x = 0; x < n; x++) {
        // Só processa os computadores que estão ligados (estado 1)
        if (lab[x].estado == 1) {
            lab[x].tempo_inativo += CICLO_SIMULACAO; 

            // Se exceder o limite e não for prioridade, entra em hibernação
            if (lab[x].tempo_inativo > LIMITE_INATIVIDADE && lab[x].prioritaria == 0) {
                lab[x].estado = 2; // Hibernação
                lab[x].consumo_watts = CONSUMO_HIBERNANDO;
                registrar_evento(&lab[x], "Hibernacao automatica");
            }
        }
    }
}

// --- FUNÇÃO III: REGISTRO DE EVENTOS ---
void registrar_evento(Computador *pc, const char *eventos) {
    // Verifica se há espaço no buffer de 300 caracteres
    if (strlen(pc->historico) + strlen(eventos) + 4 < 300) {
        strcat(pc->historico, " | ");
        strcat(pc->historico, eventos);
    }
}

// --- FUNÇÃO IV: EXIBIR STATUS ---
void exibir_status(Computador lab[], int n) {
    int x;
    for (x = 0; x < n; x++) {
        char simbolo;
        if (lab[x].estado == 1) {
            simbolo = 'L';
        } 
        else if (lab[x].estado == 2) {
            simbolo = 'H';
        } 
        else {
            simbolo = 'D';
        }
        printf("[%02d:%c ] ", lab[x].id, simbolo);
        if ((x + 1) % 5 == 0) {
            printf("\n");
        }
    }
}

// --- FUNÇÃO V: CALCULAR O CONSUMO TOTAL DE WATTS ---
float calcular_consumo(Computador lab[], int n) {
    float total = 0;
    int x;
    for (x = 0; x < n; x++) {
        total += lab[x].consumo_watts;
    }

    return total;
}

// --- FUNÇÃO VI: CALCULAR A DIFERENÇA DE CONSUMODE WATTS ---
float calcular_economia(Computador lab[], int n) {
    float consumo_maximo = (float)(n * CONSUMO_LIGADO);
    float consumo_atual  = calcular_consumo(lab, n);
    float diferenca = consumo_maximo - consumo_atual;

    return diferenca;
}

// --- FUNÇÃO VII: GERAR RELATORIO ---
void gerar_relatorio(Computador lab[], int n) {
    int x;
    int ligadas = 0, hibernando = 0, desligadas = 0;

    for (x = 0; x < n; x++) {
        if (lab[x].estado == 1) {
            ligadas++;
        } 
        else if (lab[x].estado == 2) {
            hibernando++;
        } 
        else {
            desligadas++;
        }
    }
    printf("\n===== RELATORIO FINAL =====\n");
    printf("Maquinas ligadas:    %d\n", ligadas);
    printf("Maquinas hibernando: %d\n", hibernando);
    printf("Maquinas desligadas: %d\n", desligadas);
    printf("Consumo total:       %.1f W\n", calcular_consumo(lab, n));
    printf("Economia gerada:     %.1f W\n", calcular_economia(lab, n));
}

// --- FUNÇÃO VIII:  LIGAR MAQUINA---
void ligar_maquina(Computador lab[], int id) {
    int x;

    for (x = 0; x < TOTAL_COMPUTADORES; x++) {
        if (lab[x].id == id) {

            if (lab[x].estado == 1) {
                printf("Maquina ja esta ligada.\n");
            } 
            else {
                lab[x].estado        = 1;
                lab[x].tempo_inativo = 0;
                lab[x].consumo_watts = CONSUMO_LIGADO;

                registrar_evento(&lab[x], "Ligada manualmente");
            }

            return;
        }
    }
}
// --- FUNÇÃOO IX: DEFINIR ALGUM COMPUTADOR COMO PRIORIDADE ---
void definir_prioritaria(Computador lab[], int id) {
    int x;

    for (x = 0; x < TOTAL_COMPUTADORES; x++) {
        if (lab[x].id == id) {
            lab[x].prioritaria = 1;

            registrar_evento(&lab[x], "Definida como prioritaria");
            return;
        }
    }
}

// --- FUNÇÃO X: INICIAR SIMULAÇÃO ---
void simular_atividade(Computador lab[], int n, int id) {
    int x;
    int alvo = -1;

    // escolher maquina
    if (id == 0) {
        alvo = rand() % n; // aleatoria
    } 
    else {
        for (x = 0; x < n; x++) {
            if (lab[x].id == id) {
                alvo = x;
                break;
            }
        }
    }

    // faz a simulacao
    int tempo_anterior = lab[alvo].tempo_inativo;

    lab[alvo].tempo_inativo = 0;

    if (lab[alvo].estado == 2) {
        lab[alvo].estado        = 1;
        lab[alvo].consumo_watts = CONSUMO_LIGADO;

        registrar_evento(&lab[alvo], "Reativada por usuario");
    } 
    else {
        registrar_evento(&lab[alvo], "Atividade simulada");
    }

    // mostra o estado DEPOIS da simulação
    printf("\n  --- ESTADO DEPOIS ---\n");
    printf("  Maquina:     %02d\n", lab[alvo].id);

    printf("  Estado:      %s\n",
        lab[alvo].estado == 1 ? "Ligada" :
        lab[alvo].estado == 2 ? "Hibernando" : "Desligada");

    printf("  Inatividade: %d min\n", lab[alvo].tempo_inativo);
    printf("  Consumo:     %.1f W\n", lab[alvo].consumo_watts);

    printf("  Economia:    %.1f W recuperados\n",
        (float)(CONSUMO_LIGADO - lab[alvo].consumo_watts) == 0 ?
        (float)(CONSUMO_LIGADO - CONSUMO_HIBERNANDO) : 0);
}
int main()
{
    printf("Hello World");

    return 0;
}