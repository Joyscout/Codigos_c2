// vetor multiplicação de vetor 1 e 2
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float vetor2[5]={6,7,8,9,10};
    float vetor3[5];
    float vetor1[5]={1,2,3,4,5};

    for (i=0; i<5; i++){
     vetor3[i]=vetor1[i]*vetor2[i];
        
    printf("a multiplicação dos %d valores dos vetores 1 e 2 é: %f\n",i+1, vetor3[i]);
    }


    return 0;
}