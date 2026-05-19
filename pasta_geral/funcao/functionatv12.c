#include <stdio.h>
#include <stdlib.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void ler(int linha, int con,int matrix1[linha][con] ) {
    int i, j;
    for (i = 0; i < linha; i++) {
        for (j = 0; j < con; j++) {
            printf("Digite o valor[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
            }
        }
    }
void mults(int matA[3][3], int matB[3][3], int matC[3][3] ){
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
}
}
}
}
int main(){
    int i, j;
    int matA[3][3];
    int matB[3][3];
    int matC[3][3];
        
        printf("Matriz A: \n");
        ler(3, 3, matA);
        printf("\n\nMatriz B: \n");
        ler(3, 3, matB);
        mults(matA, matB, matC);
        limpar_tela();
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%d\t", matC[i][j]);
            }
            printf("\n");
        }
        return 0;

}