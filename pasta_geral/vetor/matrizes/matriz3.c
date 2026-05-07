// matrix vezes 5
#include <stdio.h>
#include <stdlib.h>
int main(){

   int matrix1[3][5];
   int matrix_result[3][3];
   int k=5;
   int i,j;
    // Matriz 1
   for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite cada indice da matriz 1: [%d] | [%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Matriz 3 = matriz 1 * 5
   for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrix_result[i][j]=matrix1[i][j]*k
        }
    }
    // Impressão
   for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", matrix_result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
