//vigesima quinta questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int cic, dependentes;
    float renda_bruta, renda_liquida, abatimento, imposto;

    while (1) {
        printf("\n0 -  para cessar o codigo\n");
        printf("\nDigite o CIC: ");
        scanf("%d", &cic);

        if (cic == 0) {
            break;
        }

        printf("Digite o numero de dependentes: ");
        scanf("%d", &dependentes);

        printf("Digite a renda bruta anual: R$ ");
        scanf("%f", &renda_bruta);

        abatimento = dependentes * 600.0;
        renda_liquida = renda_bruta - abatimento;

        if (renda_liquida <= 1000) {
            imposto = 0; 
        } 
        else if (renda_liquida <= 5000) {
            imposto = renda_liquida * 0.15;
        } 
        else {
            imposto = renda_liquida * 0.25; 
        }

        printf("\n--- Resultado para CIC: %d ---\n", cic);
        printf("Renda Liquida: R$ %.2f\n", renda_liquida);
        if (imposto == 0) {
            printf("Situacao: ISENTO\n");
        } else {
            printf("Imposto a pagar: R$ %.2f\n", imposto);
        }
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}