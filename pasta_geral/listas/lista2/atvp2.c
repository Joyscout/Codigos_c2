//segunda questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
   
    printf("\nDigite o segundo número: ");
    scanf("%d",&n2);

    soma=n1+n2;

    if(soma>20){
        soma=soma+8;
        printf("o resultado é %d com mais 8", soma);
    }else if(soma==20){
        printf("o resultado é %d", soma);
    }else{
        soma=soma-5;
        printf("o resultado é %d com menos 5", soma);
    }

    return 0;
}