#include <stdio.h>
#include <stdlib.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
float mediaSoma(int matrix1[2][3], int matrix2[2][3]){
    int i, j, soma=0;
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            soma+=matrix1[i][j] +matrix2[i][j];

}
    }
    return (float) soma/12;
}

int main(){
    int matrix1[2][3]={{2,4,6},{8,10,12}}, matrix2[2][3]={{3,6,9},{12,15,18}};
        int i,j, count;
        float media;


        media=mediaSoma(matrix1, matrix2);
        printf("Media: %.2f\n", media);

        return 0;

}