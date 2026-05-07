
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int count=0, i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
         printf("\nDigite os elementos da matriz: ");
         scanf("%d", &matriz[i][j]);
         
         
    }
    }
     for(i=0; i<4; i++){
        for(j=0; j<4; j++){
    if (matriz[i][j]>10){
             count++;
         }
        }
     }
    printf("A quantidade de elementos maiores que 10 são de %d elementos", count);
   

    return 0;
}