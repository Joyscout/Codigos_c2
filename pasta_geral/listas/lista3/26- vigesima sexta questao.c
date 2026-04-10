//vigesima sexta questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int canal, pessoas;
    int total_4 = 0, total_5 = 0, total_7 = 0, total_12 = 0;
    int total_geral = 0;


    printf("(Digite 0 no canal para encerrar)\n");

    while (1) {
        printf("\nNúmero do canal (4, 5, 7, 12): ");
        scanf("%d", &canal);

        // Condição de saída
        if (canal == 0) {
            break;
        }

      
        if (canal == 4 || canal == 5 || canal == 7 || canal == 12) {
            printf("Quantidade de pessoas assistindo: ");
            scanf("%d", &pessoas);

            total_geral += pessoas;

            switch (canal) {
                case 4:  
                    total_4 += pessoas;  
                    break;
                case 5: 
                    total_5 += pessoas;
                    break;
                case 7: 
                    total_7 += pessoas;  
                    break;
                case 12: 
                    total_12 += pessoas;
                    break;
            }
        } else {
            printf("Canal inválido! Apenas 4, 5, 7 ou 12.\n");
        }
    }


    if (total_geral > 0) {
        printf("\n\nCanal 4:  %.2f%% de audiência\n", ((float)total_4 / total_geral) * 100);
        printf("Canal 5:  %.2f%% de audiência\n", ((float)total_5 / total_geral) * 100);
        printf("Canal 7:  %.2f%% de audiência\n", ((float)total_7 / total_geral) * 100);
        printf("Canal 12: %.2f%% de audiência\n", ((float)total_12 / total_geral) * 100);
        printf("----------------------------------------\n");
        printf("Total de telespectadores: %d\n", total_geral);
    } else {
        printf("Nenhum dado de audiência foi registrado.\n");
    }

    return 0;
}