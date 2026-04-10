//Trigesima questao
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main() {
    int idade, total_pessoas = 0;
    char estado_civil;
    int casados = 0, solteiros = 0, viuovos = 0, desquitados = 0;
    int soma_idade_viuvos = 0;

    while (1) {
        printf("(Digite uma idade negativa para encerrar)\n");
        printf("\nDigite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break; 
        }

        printf("Estado Civil (C-Casado, S-Solteiro, V-Viuvo, D-Desquitado): ");
        scanf(" %c", &estado_civil);

        estado_civil = toupper(estado_civil);
        total_pessoas++;
        if (estado_civil == 'C') {
            casados++;
        } else if (estado_civil == 'S') {
            solteiros++;
        } else if (estado_civil == 'V') {
            viuovos++;
            soma_idade_viuvos += idade;
        } else if (estado_civil == 'D') {
            desquitados++;
        } else {
            printf("Estado civil inválido! Esta entrada não será contabilizada no total.\n");
            total_pessoas--; 
        }
    }

    printf("Quantidade de pessoas casadas: %d\n", casados);
    printf("Quantidade de pessoas solteiras: %d\n", solteiros);

    if (viuovos > 0) {
        float media_viuvos = (float)soma_idade_viuvos / viuovos;
        printf("Média de idade das pessoas viúvas: %.2f anos\n", media_viuvos);
    } else {
        printf("Média de idade das pessoas viúvas: N/A (Nenhum viúvo registrado)\n");
    }

    if (total_pessoas > 0) {
        float perc_desquitados = ((float)desquitados / total_pessoas) * 100;
        printf("Porcentagem de desquitados/separados: %.2f%%\n", perc_desquitados);
    }

    return 0;
}