//terceira questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Digite um número: ");
    scanf("%d",&n1);
   
    if(n1 % 3 ==0){
        printf(" %d é multiplo de 3", n1);
    }else{
        printf(" %d não é multiplo de 3", n1);
    }

    return 0;
}