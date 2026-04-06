// vetor par 0 e impar 1
#include <stdio.h>

int main()
{
    int vetor[100], i;
    for(i=1;i<=100;i++){
        if(i %2==0){
            vetor[i]=0;
        }else{
            vetor[i]=1;
        }
        printf("%d° posição: %d\n", i,vetor[i]);
    }

    return 0;
}