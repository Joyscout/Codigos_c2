#include <stdio.h>
#include <stdlib.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void mults(int matrix1[2][3], int matrix2[3][4], int resultado[2][4]) {
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < 3; k++) {
                resultado[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main(){
    int matrix1[2][3]={{2,4,6},{8,10,12}}, matrix2[3][4]={{3,6,9,12},{15,18,21},{24,27,30,33}};
        int i,j;
        int resultado[2][4];


        mults(matrix1,matrix2,resultado);

        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                printf("%d\t", resultado[i][j]);
            }
            printf("\n");
        }
        return 0;

}