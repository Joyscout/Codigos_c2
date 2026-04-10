//setima questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);
   
   
    if(n1>=20 && n1<=50){
        printf("\n%d esta entre 20 e 50\n", n1);
    }else{
        printf("\n%d não esta entre 20 e 50\n", n1);
    }

    return 0;
}