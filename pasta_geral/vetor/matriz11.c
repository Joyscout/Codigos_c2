#include <stdio.h>

int main() {
    int matrizes[2][5][5]; 
    int somaMatrizes[5][5];
    int somaDiagonal = 0;
    int ord; 

    printf("Digite a ordem das matrizes (maximo 5): ");
    scanf("%d", &ord);

    if (ord > 5) ord = 5; 

    // 1. Leitura das duas matrizes
    for (int m = 0; m < 2; m++) {
        printf("\nPreenchendo a Matriz %c:\n", (m == 0) ? 'A' : 'B');
        for (int i = 0; i < ord; i++) {
            for (int j = 0; j < ord; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matrizes[m][i][j]);
            }
        }
    }

    for (int i = 0; i < ord; i++) {
        for (int j = 0; j < ord; j++) {
            somaMatrizes[i][j] = matrizes[0][i][j] + matrizes[1][i][j];

            if (i == j) {
                somaDiagonal += matrizes[0][i][j] + matrizes[1][i][j];
            }
        }
    }

    printf("\n--- Matriz Soma (A + B) ---\n");
    for (int i = 0; i < ord; i++) {
        for (int j = 0; j < ord; j++) {
            printf("%d\t", somaMatrizes[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma total das diagonais principais: %d\n", somaDiagonal);

    return 0;
}