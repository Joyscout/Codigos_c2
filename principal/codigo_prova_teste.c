#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_COMPUTADORES  15
#define LIMITE_INATIVIDADE  20
#define CONSUMO_LIGADO     150
#define CONSUMO_HIBERNANDO   5
#define CICLO_SIMULACAO      5

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
void  limpar_tela        ();
int   validar_id         (int id, int min, int max);
void  aguardar_enter     ();

int main() {
    Computador lab[TOTAL_COMPUTADORES];
    srand((unsigned int)time(NULL));
    inicializar_lab(lab, TOTAL_COMPUTADORES);
    definir_prioritaria(lab, 1);

    limpar_tela();
    printf("==============================================\n");
    printf("  HUB DE EFICIENCIA ENERGETICA - LABORATORIO \n");
    printf("==============================================\n");
    printf("  15 computadores monitorados | Ciclo: %d min\n", CICLO_SIMULACAO);
    printf("  Limite de inatividade: %d min\n", LIMITE_INATIVIDADE);
    printf("==============================================\n\n");
    printf("  Estado inicial do laboratorio:\n\n");
    exibir_status(lab, TOTAL_COMPUTADORES);
    printf("\nPressione ENTER para iniciar a simulacao...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    int rodando = 1;
    int ciclo   = 0;

    while (rodando) {
        ciclo++;
        monitorar(lab, TOTAL_COMPUTADORES);
        menu(lab, TOTAL_COMPUTADORES);

        if (ciclo >= 20) {
            printf("\nSimulacao encerrada apos 20 ciclos.\n");
            aguardar_enter();
            rodando = 0;
        }
    }

    gerar_relatorio(lab, TOTAL_COMPUTADORES);
    return 0;
}

void limpar_tela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void aguardar_enter() {
    printf("\nPressione ENTER para voltar ao menu...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int validar_id(int id, int min, int max) {
    if (id < min || id > max) {
        printf("\n  [ERRO] ID %d invalido! Digite um numero entre %d e %d.\n", id, min, max);
        return 0;
    }
    return 1;
}

void inicializar_lab(Computador lab[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        lab[i].id            = i + 1;
        lab[i].estado        = 1;
        lab[i].tempo_inativo = rand() % 10;
        lab[i].consumo_watts = CONSUMO_LIGADO;
        lab[i].prioritaria   = 0;
        lab[i].historico[0]  = '\0';
        registrar_evento(&lab[i], "Inicializado");
    }
}

void monitorar(Computador lab[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (lab[i].estado == 1) {
            lab[i].tempo_inativo += CICLO_SIMULACAO;
            if (lab[i].tempo_inativo > LIMITE_INATIVIDADE && lab[i].prioritaria == 0) {
                lab[i].estado        = 2;
                lab[i].consumo_watts = CONSUMO_HIBERNANDO;
                registrar_evento(&lab[i], "Hibernacao automatica");
            }
        }
    }
}

void exibir_status(Computador lab[], int n) {
    int i;
    printf("--- PAINEL DO LABORATORIO ---\n");
    printf("L=Ligada  H=Hibernando  D=Desligada  *=Prioritaria\n\n");
    for (i = 0; i < n; i++) {
        char simbolo;
        if      (lab[i].estado == 1) simbolo = 'L';
        else if (lab[i].estado == 2) simbolo = 'H';
        else                         simbolo = 'D';

        if (lab[i].prioritaria)
            printf("[%02d:%c*] ", lab[i].id, simbolo);
        else
            printf("[%02d:%c ] ", lab[i].id, simbolo);

        if ((i + 1) % 5 == 0) printf("\n");
    }
    printf("\n");
    printf("Consumo atual:   %.1f W\n", calcular_consumo(lab, n));
    printf("Economia gerada: %.1f W economizados\n", calcular_economia(lab, n));
}

float calcular_consumo(Computador lab[], int n) {
    float total = 0.0;
    int i;
    for (i = 0; i < n; i++)
        total += lab[i].consumo_watts;
    return total;
}

float calcular_economia(Computador lab[], int n) {
    float consumo_maximo = (float)(n * CONSUMO_LIGADO);
    float consumo_atual  = calcular_consumo(lab, n);
    return consumo_maximo - consumo_atual;
}

void simular_atividade(Computador lab[], int n, int id) {
    int i;
    int alvo = -1;

    if (id == 0) {
        alvo = rand() % n;
    } else {
        for (i = 0; i < n; i++) {
            if (lab[i].id == id) {
                alvo = i;
                break;
            }
        }
        if (alvo == -1) {
            printf("\n  [ERRO] Maquina %d nao encontrada.\n", id);
            aguardar_enter();
            return;
        }
    }

    if (lab[alvo].estado == 0) {
        printf("\n  [ERRO] A maquina esta DESLIGADA e nao pode ser ativada assim.\n");
        printf("         Use a opcao 'Ligar maquina' primeiro.\n");
        aguardar_enter();
        return;
    }

    printf("\n  --- ESTADO ANTES ---\n");
    printf("  Maquina:     %02d\n", lab[alvo].id);
    printf("  Estado:      %s\n", lab[alvo].estado == 1 ? "Ligada" :
                                   lab[alvo].estado == 2 ? "Hibernando" : "Desligada");
    printf("  Inatividade: %d min\n", lab[alvo].tempo_inativo);
    printf("  Consumo:     %.1f W\n", lab[alvo].consumo_watts);

    int tempo_anterior = lab[alvo].tempo_inativo;
    lab[alvo].tempo_inativo = 0;

    if (lab[alvo].estado == 2) {
        lab[alvo].estado        = 1;
        lab[alvo].consumo_watts = CONSUMO_LIGADO;
        registrar_evento(&lab[alvo], "Reativada por usuario");
    } else {
        registrar_evento(&lab[alvo], "Atividade simulada");
    }

    printf("\n  --- ESTADO DEPOIS ---\n");
    printf("  Maquina:     %02d\n", lab[alvo].id);
    printf("  Estado:      %s\n", lab[alvo].estado == 1 ? "Ligada" :
                                   lab[alvo].estado == 2 ? "Hibernando" : "Desligada");
    printf("  Inatividade: %d min\n", lab[alvo].tempo_inativo);
    printf("  Consumo:     %.1f W\n", lab[alvo].consumo_watts);

    aguardar_enter();
}

void definir_prioritaria(Computador lab[], int id) {
    int i;
    for (i = 0; i < TOTAL_COMPUTADORES; i++) {
        if (lab[i].id == id) {
            lab[i].prioritaria = 1;
            registrar_evento(&lab[i], "Definida como prioritaria");
            printf("\n  [OK] Maquina %02d marcada como prioritaria.\n", id);
            printf("       Ela nao sera hibernada automaticamente.\n");
            aguardar_enter();
            return;
        }
    }
    printf("\n  [ERRO] Maquina %d nao encontrada.\n", id);
    aguardar_enter();
}

void ligar_maquina(Computador lab[], int id) {
    int i;
    for (i = 0; i < TOTAL_COMPUTADORES; i++) {
        if (lab[i].id == id) {
            if (lab[i].estado == 1) {
                printf("\n  [AVISO] Maquina %02d ja esta ligada. Nenhuma acao necessaria.\n", id);
            } else {
                lab[i].estado        = 1;
                lab[i].tempo_inativo = 0;
                lab[i].consumo_watts = CONSUMO_LIGADO;
                registrar_evento(&lab[i], "Ligada manualmente");
                printf("\n  [OK] Maquina %02d foi ligada com sucesso.\n", id);
                printf("       Consumo: %d W | Inatividade zerada.\n", CONSUMO_LIGADO);
            }
            aguardar_enter();
            return;
        }
    }
    printf("\n  [ERRO] Maquina %d nao encontrada.\n", id);
    aguardar_enter();
}

void registrar_evento(Computador *pc, const char *evento) {
    if (strlen(pc->historico) + strlen(evento) + 4 < 300) {
        strcat(pc->historico, "| ");
        strcat(pc->historico, evento);
    }
}

void gerar_relatorio(Computador lab[], int n) {
    int i;
    int ligadas = 0, hibernando = 0, desligadas = 0;

    limpar_tela();
    printf("==========================================\n");
    printf("          RELATORIO FINAL\n");
    printf("==========================================\n");

    for (i = 0; i < n; i++) {
        if      (lab[i].estado == 1) ligadas++;
        else if (lab[i].estado == 2) hibernando++;
        else                         desligadas++;
    }

    printf("Maquinas ligadas:     %d\n", ligadas);
    printf("Maquinas hibernando:  %d\n", hibernando);
    printf("Maquinas desligadas:  %d\n", desligadas);
    printf("------------------------------------------\n");
    printf("Consumo total atual:  %.1f W\n", calcular_consumo(lab, n));
    printf("Economia gerada:      %.1f W\n", calcular_economia(lab, n));
    printf("------------------------------------------\n");
    printf("HISTORICO DE EVENTOS POR MAQUINA:\n\n");

    for (i = 0; i < n; i++) {
        printf("  PC %02d%s: %s\n",
               lab[i].id,
               lab[i].prioritaria ? " [PRIO]" : "       ",
               lab[i].historico[0] ? lab[i].historico : "(sem eventos)");
    }

    printf("==========================================\n");
}

void menu(Computador lab[], int n) {
    int opcao, id;

    limpar_tela();
    printf("==============================================\n");
    printf("  HUB DE EFICIENCIA ENERGETICA - LABORATORIO \n");
    printf("==============================================\n\n");
    printf("  1. Ver painel de controle\n");
    printf("  2. Simular atividade de usuario\n");
    printf("  3. Ligar uma maquina\n");
    printf("  4. Definir maquina como prioritaria\n");
    printf("  5. Ver historico de uma maquina\n");
    printf("  6. Avancar ciclo\n");
    printf("  0. Encerrar simulacao\n\n");
    printf("  Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            limpar_tela();
            exibir_status(lab, n);
            aguardar_enter();
            break;

        case 2: {
            int escolha, id_alvo;
            limpar_tela();
            printf("  Simular atividade em qual maquina?\n\n");
            printf("  1. Maquina aleatoria\n");
            printf("  2. Escolher uma especifica\n\n");
            printf("  Opcao: ");
            scanf("%d", &escolha);
            if (escolha == 2) {
                printf("  ID da maquina (1-%d): ", TOTAL_COMPUTADORES);
                scanf("%d", &id_alvo);
                if (!validar_id(id_alvo, 1, TOTAL_COMPUTADORES)) {
                    aguardar_enter();
                    break;
                }
            } else {
                id_alvo = 0;
            }
            simular_atividade(lab, n, id_alvo);
            break;
        }

        case 3:
            limpar_tela();
            printf("  ID da maquina para ligar (1-%d): ", TOTAL_COMPUTADORES);
            scanf("%d", &id);
            if (!validar_id(id, 1, TOTAL_COMPUTADORES)) {
                aguardar_enter();
                break;
            }
            ligar_maquina(lab, id);
            break;

        case 4:
            limpar_tela();
            printf("  ID da maquina prioritaria (1-%d): ", TOTAL_COMPUTADORES);
            scanf("%d", &id);
            if (!validar_id(id, 1, TOTAL_COMPUTADORES)) {
                aguardar_enter();
                break;
            }
            definir_prioritaria(lab, id);
            break;

        case 5:
            limpar_tela();
            printf("  ID da maquina (1-%d): ", TOTAL_COMPUTADORES);
            scanf("%d", &id);
            if (!validar_id(id, 1, TOTAL_COMPUTADORES)) {
                aguardar_enter();
                break;
            }
            {
                int i;
                for (i = 0; i < n; i++) {
                    if (lab[i].id == id) {
                        printf("\n  Historico PC %02d:\n  %s\n",
                               lab[i].id,
                               lab[i].historico[0] ? lab[i].historico : "(sem eventos)");
                        break;
                    }
                }
            }
            aguardar_enter();
            break;

        case 6:
            printf("\n  [OK] Ciclo avancado sem acao.\n");
            aguardar_enter();
            break;

        case 0:
            gerar_relatorio(lab, n);
            exit(0);

        default:
            printf("\n  [ERRO] Opcao invalida. Tente novamente.\n");
            aguardar_enter();
            break;
    }
}