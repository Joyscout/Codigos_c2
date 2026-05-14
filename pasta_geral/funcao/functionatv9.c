#include <stdio.h>
#include <stdlib.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

float determinant(int m[3][3]) {
    float det;

    det = m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) 
        - m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) 
        + m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);

 return det;
}       

int main(){
        int matrix1[3][3];
        float resultado;
        int i, j;
    limpar_tela();

    printf("Preencha a matriz 3x3:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("Posicao [%d][%d]: ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }
        resultado=determinant(matrix1);
        
        printf("\nO determinante da matriz e: %.2f\n", resultado);
        return 0;

}