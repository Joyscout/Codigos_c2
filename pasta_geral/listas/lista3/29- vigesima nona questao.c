//vigesima nona questao
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    float valor, totalGeral = 0;
    float totalLimpeza = 0, totalAlimentacao = 0, totalHigiena = 0;
    char codigo;

    printf("--- Sistema de Vendas Diário ---\n");
    printf("Códigos: L-Limpeza, A-Alimentação, H-Higiene\n");
    printf("Digite 0 no valor para encerrar.\n\n");

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);

        if (valor == 0) {
            break;
        }

        printf("Digite o codigo (L/A/H): ");
        scanf(" %c", &codigo); 
        codigo = toupper(codigo);

        switch (codigo) {
            case 'L':
                totalLimpeza += valor;
                break;
            case 'A':
                totalAlimentacao += valor;
                break;
            case 'H':
                totalHigiena += valor;
                break;
            default:
                printf("Código inválido! Tente novamente.\n");
                continue; 
        }
        
        totalGeral += valor;

    } while (valor != 0);

    printf("\n--- Resumo Final do Dia ---\n");
    printf("Total Limpeza (L): R$ %.2f\n", totalLimpeza);
    printf("Total Alimentação (A): R$ %.2f\n", totalAlimentacao);
    printf("Total Higiene (H): R$ %.2f\n", totalHigiena);
    printf("Total Geral Vendido: R$ %.2f\n", totalGeral);

    return 0;
}