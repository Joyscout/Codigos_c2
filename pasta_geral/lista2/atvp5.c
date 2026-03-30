//quinta questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Digite um número: ");
    scanf("%d",&n1);
   
    if(n1 % 3 ==0 && n1 % 7 ==0){
        printf(" %d é tanto multiplo de 3 tanto multiplo de 7", n1);
    }else{
        printf(" %d não é tanto multiplo de 3 tanto multiplo de 7", n1);
    }

    return 0;
}