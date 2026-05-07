#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int matrixes[3][4][4];
    int temp[4][4] = {0};     
    int resultado[4][4] = {0};  
    int i, j, k, m;

    for (k = 0; k < 3; k++) {
        printf("\n--- Matriz %d ---\n", k + 1);
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                printf("Digite o valor [%d][%d]: ", i, j);
                scanf("%d", &matrixes[k][i][j]);
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (m = 0; m < 4; m++) {
                temp[i][j] += matrixes[0][i][m] * matrixes[1][m][j];
            }
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (m = 0; m < 4; m++) {
                resultado[i][j] += temp[i][m] * matrixes[2][m][j];
            }
        }
    }

    printf("\nResultado Final da multiplicacao (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}