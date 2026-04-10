// Vigesima quarta questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float velocidade, tempo, distancia, litros_trecho;
    float total_litros = 0;

    printf("Digite uma velocidade negativa para encerrar o programa.\n\n");

    while (1) {
        printf("\n0 -  para cessar o codigo\n");
        printf("Informe a velocidade do carro (km/h): ");
        scanf("%f", &velocidade);

        if (velocidade < 0) {
            break;
        }
        printf("Informe o tempo de viagem (horas): ");
        scanf("%f", &tempo);

        distancia = tempo * velocidade;
        litros_trecho = distancia / 10.0;

        total_litros += litros_trecho;

        printf(">> Distância percorrida: %.2f km\n", distancia);
        printf(">> Litros consumidos neste trecho: %.2f L\n\n", litros_trecho);
    }

    printf("Total de litros gastos na viagem: %.2f L\n", total_litros);
    printf("Programa encerrado.\n");

    return 0;
}