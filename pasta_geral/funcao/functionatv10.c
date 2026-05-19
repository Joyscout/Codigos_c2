#include <stdio.h>
#include <stdlib.h>

void ler(int linha, int con,int matrix1[linha][con] ) {
    int i, j, k;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < con; j++) {
            printf("Digite o valor[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
            }
        }
    }

void mults(int matA[2][3], int matB[3][4], int matC[2][4] ){
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            matC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
}
}
}
}
int main(){
    int i, j;
    int matA[2][3];
    int matB[3][4];
    int matC[2][4];
        
        printf("Matriz A: \n");
        ler(2, 3, matA);
        printf("\nMatriz B: \n");
        ler(3, 4, matA);
       mults(matA, matB, matC);
        for(i=0; i<2; i++){
            for(j=0; j<4; j++){
                printf("%d\t", matC[i][j]);
            }
            printf("\n");
        }
        return 0;

}