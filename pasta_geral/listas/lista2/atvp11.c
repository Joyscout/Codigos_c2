//Decima primeira questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&n2);
    printf("\nDigite o terceiro numero: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf(" \no maior número é %d", n1);
    }else if(n2>n1 && n2>n3 ){
        printf(" \no maior número é %d", n2);
    }else{
        printf(" \no maior número é %d", n3);
    }

    return 0;
}