//decima nona questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, soma;
    float media;

    printf("Digite o primeiro ponto: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo ponto: ");
    scanf("%d",&n2);
    printf("\nDigite o terceiro ponto: ");
    scanf("%d",&n3);

   if (n1 >= n2 && n2 >= n3) {
       printf("\n\tPontos Por Jogador");
        printf("\nJogador 1: %d\nJogador 2: %d\nJogador 3: %d\n", n1, n2, n3);
    } else if (n1 >= n3 && n3 >= n2) {
        printf("\n\tPontos Por Jogador");
        printf("\nJogador 1: %d\nJogador 3: %d\nJogador 2: %d\n", n1, n3, n2);
    } else if (n2 >= n1 && n1 >= n3) {
        printf("\n\tPontos Por Jogador");
        printf("\nJogador 2: %d\nJogador 1: %d\nJogador 3: %d\n", n2, n1, n3);
    } else if (n2 >= n3 && n3 >= n1) {
        printf("\n\tPontos Por Jogador");
        printf("\nJogador 2 %d\nJogador 3: %d\nJogador 1: %d\n", n2, n3, n1);
    } else if (n3 >= n1 && n1 >= n2) {
        printf("\n\tPontos Por Jogador");
        printf("\nJogador 3: %d\nJogador 1: %d\nJogador 2: %d\n", n3, n1, n2);
    } else {
        printf("\n\tPontos Por Jogador");
        printf("\nJogador 3: %d\nJogador 2: %d\nJogador 1: %d\n", n3, n2, n1);
    }
soma=n1+n2+n3;
media=(n1+n2+n3)/3;

if(soma>100){
    printf("\nA media Aritmética da equipe foi de: %.2f", media);
}else{
    printf("\nEquipe desclassificada");
}
    return 0;
}