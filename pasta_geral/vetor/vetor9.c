// matrix encontrada
#include <stdio.h>
#include <stdlib.h>
int main(){

   int matrix1[5][5];
   int i,j;
    // Matriz 1
   for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("\nDigite cada indice da matriz: [%d] | [%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\ndiagonal principal\n");
   for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf("%4d", matrix1[i][j]);
            }else {
                printf("    "); // Espaço para manter o formato
            }
            }
            printf("\n");
        }
    //   p - - - s
    //   - p - s -
    //   - - i - -
    //   - s - p -
    //   s - - - p

        return 0;
    }

