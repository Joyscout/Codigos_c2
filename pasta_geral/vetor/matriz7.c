
#include <stdio.h>

int main()
{
    int matriz[5][5];
    int  count=0, i, j;
    
      
    printf("\n\ndiagonal principal\n");
   for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                matriz[i][j]=1;
            }else {
                matriz[i][j]=0;
            }
            }
            printf("\n");
        }
      for (i=0;i<5;i++){
        for(j=0;j<5;j++){  
    printf("%4d ",matriz[i][j]);
        }
        printf("\n");
      }
   

    return 0;
}