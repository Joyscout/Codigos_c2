#include <stdio.h>
#include <stdlib.h>

void sub(int matA[3][3], int matB[3][3], int matC[3][3] ){
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
           matC[i][j] = matA[i][j] - matB[i][j];
            }
        }
    }
int main(){
    int i, j;
    int matA[3][3] = {{2,2,2}, {4,4,4}, {6,6,6}};
    int matB[3][3] = {{3,3,3}, {6,6,6}, {9,9,9}};
    int matC[3][3];
        
       sub(matA, matB, matC);
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("%d\t", matC[i][j]);
            }
            printf("\n");
        }
        return 0;
}