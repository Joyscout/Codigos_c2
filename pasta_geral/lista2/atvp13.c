//Decima terceira questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, media;
    char nome[20];
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite a sua primeira nota: ");
    scanf("%d",&n1);
    printf("\nDigite a sua segunda nota: ");
    scanf("%d",&n2);
    printf("\nDigite a sua terceira nota: ");
    scanf("%d",&n3);
   media=(n1+n2+n3)/3;
   
    if(media>=7){
        printf(" \n%s foi aprovado",nome);
    
    }else{
        printf(" \n%s foi reprovado",nome);
    }

    return 0;
}