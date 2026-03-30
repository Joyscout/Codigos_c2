// Vigesima questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha, local;
    float salario;

    int totFlu = 0, totBota = 0, totVasco = 0, totFla = 0, totOutros = 0;
    float somaSalarioBota = 0;
    int niBota = 0; 
    int riOutros = 0; 
    int nitVasco = 0; 

    do {
      
        printf("\nQual o seu time de coracao?\n");
        printf("\n0 -  para cessar o codigo\n");
        printf("1-Fluminense, 2-Botafogo, 3-Vasco, 4-Flamengo, 5-Outros: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            break; 
        }

        printf("Onde voce mora? (1-RJ, 2-Niteroi, 3-Outros): ");
        scanf("%d", &local);

        printf("Qual o seu salario? ");
        scanf("%f", &salario);

        // Contabilizar torcedores por clube
        switch(escolha) {
            case 1:
                totFlu++;
                break;
            case 2: 
                totBota++; 
                somaSalarioBota += salario;
                niBota++;
                break;
            case 3:
                totVasco++; 
                break;
            case 4: 
                totFla++;
                break;
            case 5: 
                totOutros++;
                break;
            default:
                printf("valor invalido\nTente novamnete\n");
        }

        
        if (local == 1 && escolha == 5) {
            riOutros++;
        }

        
        if (local == 2 && escolha == 3) {
            nitVasco++;
        }

    } while (escolha != 0);


    float mediaSalarioBota = 0;
    if (niBota > 0) {
        mediaSalarioBota = somaSalarioBota / niBota;
    }


    printf("\n--- RESULTADOS DA PESQUISA ---\n");
    printf("Fluminense: %d\n", totFlu);
    printf("Botafogo: %d\n", totBota);
    printf("Vasco: %d\n", totVasco);
    printf("Flamengo: %d\n", totFla);
    printf("Outros: %d\n", totOutros);

    printf("\n\nMedia salarial dos torcedores do Botafogo: R$ %.2f\n", mediaSalarioBota);
    printf("Pessoas moradoras do RJ torcedoras de outros clubes: %d\n", riOutros);
    printf("Pessoas de Niteroi torcedoras do Vasco: %d\n", nitVasco);

    return 0;
}