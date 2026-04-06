// vetor soma
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetor[10], soma=0, i, n1;
    for(i=0;i<10;i++){
        printf("Digite o %d° numero: ", i+1);
        scanf("%d",&n1);
        vetor[i]=n1;
        soma+=n1;
    }
    printf("Os valores do vetor são: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\na soma dos valores do vetor é de: %d", soma);


    return 0;
}