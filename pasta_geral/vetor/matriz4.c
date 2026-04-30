// matrix encontrada
#include <stdio.h>
#include <stdlib.h>
int main(){

   int matrix1[3][5];
   int encontrar=0;
   int num;
   int i,j;
    // Matriz 1
   for (i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("\nDigite cada indice da matriz 1: [%d] | [%d]: ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\nDigite o numero que queira encontar: ");
    scanf("%d", &num);

   for (i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(num==matrix1[i][j]){
                encontrar=1;
                printf("\n\nValor encontrado [%d] na linha %d, coluna %d\n", num,i, j);
                break;
            }
        }
      
    }
    if(encontrar!=1){
        printf("\Nvalor não encontardo");
        }

    return 0;
    }

