
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int maior=0;
    int linha=0, coluna=0;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
         printf("\nDigite os elementos da matriz [%d][%d]: ",i,j);
         scanf("%d", &matriz[i][j]);
         
         
    }
    }
    maior = matriz[0][0];
     for(i=0; i<4; i++){
        for(j=0; j<4; j++){
    if (matriz[i][j]>maior){
             maior=matriz[i][j];
             linha=i;
             coluna=j;

         }
        }
     }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
          printf("%4d ", matriz[i][j]);
             
         }
        }
    printf("o maior valor valor é %d na possição [%d][%d]", maior, linha, coluna);
    return 0;
}