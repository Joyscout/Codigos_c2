//Aceitar positivos, negar negativos
#include <stdio.h>
#include <stdlib.h>


int main(){
    int num;
    printf("Digite um numero: ");   
    scanf("%d", &num);

    while (num<0) {
        printf("\nNumero invalido\n tente novamente\nDigite um numero ");
        scanf("%d", &num);
    }
    printf("\nNumero aceito");
    return 0;
}