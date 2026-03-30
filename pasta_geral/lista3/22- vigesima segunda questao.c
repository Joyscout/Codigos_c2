// Vigesima segunda questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int carteira, maxMultasCarteira = 0;
    int numMultas, i;
    float valorMulta, dividaMotorista, totalArrecadado = 0;
    int maxMultas = 0;

    while (1) {
        printf("Digite o numero da carteira (1-4327, 0 para encerrar): ");
        scanf("%d", &carteira);

        if (carteira == 0) {
            break;
        }

        printf("Numero de multas: ");
        scanf("%d", &numMultas);

        dividaMotorista = 0;
        for (i = 0; i < numMultas; i++) {
            printf("Valor da multa %d: ", i + 1);
            scanf("%f", &valorMulta);
            dividaMotorista += valorMulta;
        }

        totalArrecadado += dividaMotorista;
        printf("Total de divida do motorista %d: R$ %.2f\n\n", carteira, dividaMotorista);

        if (numMultas > maxMultas) {
            maxMultas = numMultas;
            maxMultasCarteira = carteira;
        }
    }

    printf("\n--- Resumo FINAL ---\n");
    printf("Total de recursos arrecadados: R$ %.2f\n", totalArrecadado);
    if (maxMultasCarteira != 0) {
        printf("Motorista com mais multas: Carteira %d (%d multas)\n", maxMultasCarteira, maxMultas);
    }

    return 0;
}