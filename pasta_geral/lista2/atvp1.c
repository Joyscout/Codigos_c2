//primeira questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d",n1);
   
    printf("\nDigite o segundo número: ");
    scanf("%d",n2);

    soma=n1+n2;

    if(soma>10){
        printf("o resultado da soma é %d, que é maior que 10", soma);
    }else{
        printf("o resultado da soma é %d, que é menor que 10", soma);
    }

    return 0;
}