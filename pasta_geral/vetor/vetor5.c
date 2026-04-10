// Matrix
#include <stdio.h>

int main()
{
    int matrix[20][10];
    int i,j, count;
    count=1;

    for (i=0;i<20;i++){
        for(j=0;j<10;j++){
            matrix[i][j]=count;
            count++;
            printf("\nLinha %d, coluna %d, int %d",i,j,matrix[i][j]);

        }
    }
        printf("\n");
            return 0;
}