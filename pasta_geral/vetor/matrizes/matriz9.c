
#include <stdio.h>
#include <stdlib.h>
int main(){

   int matrix[3][3];
   
   int matrix_transposta[3][3];
   int colunas=3, linhas=3;
   int i,j;
    // Matriz 1
   for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite cada indice da matriz: [%d] | [%d]: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrix_transposta[j][i] = matrix[i][j];
        }
    }
    // Matriz 3 = matriz 1 * 5
    printf("Matriz Original:\n");
      for (int i = 0; i < colunas; i++) {
           for (int j = 0; j < linhas; j++) {
               printf("%4d", matrix[i][j]);
           }
           printf("\n");
       }
 printf("\nMatriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%4d ", matrix_transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
