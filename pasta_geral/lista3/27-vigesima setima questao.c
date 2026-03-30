//vigesima setima questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matricula, qtd_disciplinas, i;
    float nota, soma_notas, cr_atual;
    float melhor_cr_5_mais = -1.0; 
    
    while (1) {
        printf("\nDigite a matricula (1 a 5000) ou outro valor para sair: ");
        scanf("%d", &matricula);

        if (matricula < 1 || matricula > 5000) {
            break;
        }
        printf("Quantidade de disciplinas cursadas: ");
        scanf("%d", &qtd_disciplinas);
        soma_notas = 0; 
        for (i = 1; i <= qtd_disciplinas; i++) {
            printf("Digite a nota da %dª disciplina: ", i);
            scanf("%f", &nota);
            soma_notas += nota;
        }

        if (qtd_disciplinas > 0) {
            cr_atual = soma_notas / qtd_disciplinas;
            printf("> Aluno %d | CR do periodo: %.2f\n", matricula, cr_atual);

            if (qtd_disciplinas >= 5) {
                if (cr_atual > melhor_cr_5_mais) {
                    melhor_cr_5_mais = cr_atual;
                }
            }
        } else {
            printf("> Aluno %d não cursou disciplinas este periodo.\n", matricula);
        }
    }

    if (melhor_cr_5_mais != -1.0) {
        printf("MELHOR CR (Alunos com 5+ disciplinas): %.2f\n", melhor_cr_5_mais);
    } else {
        printf("Nenhum aluno com 5 ou mais disciplinas foi registrado.\n");
    }

    return 0;
}