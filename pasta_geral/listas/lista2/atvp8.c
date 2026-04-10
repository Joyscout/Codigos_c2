//oitava questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Digite um número: ");
    scanf("%d",&n1);

    if(n1>20){
        printf(" \n%d é maior que 20 ", n1);
    }else if(n1==20){
        printf("\n%d é igual a 20", n1);
    }else{
        
        printf(" \n%d é menor que 20", n1);
    }

    return 0;
}