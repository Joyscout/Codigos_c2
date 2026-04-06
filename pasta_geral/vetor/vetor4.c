// vetor trocado meio a meio vise - versa
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, guard;
    int vetor[16]={0,7,8,9,4,6,2,9,4,3,2,1,6,3,7,6};

    for (i=0; i<8; i++){
        guard=vetor[i];
        vetor[i]=vetor[i+8];
        vetor[i+8]=guard;
    }
    for (i=0; i<16; i++){
        printf("%d\t",vetor[i]);
    }

    return 0;
}