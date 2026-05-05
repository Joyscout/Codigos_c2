#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int mediacao(int n1, int n2, int n3){
    float soma=n1+n2+n3;
    return soma/3;
}
void saldacao(char nome[100]){
    printf("O aluno - %s -, teve o resultado da nota:", nome);
}
int main(){
    int n1, n2, n3;
    char nome[100];
    float media;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", &nome);
    printf("\nDigite a primeira nota: ");
    scanf("%d", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%d", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%d", &n3);

    media=mediacao(n1,n2,n3);

    limpar_tela();
    if(media<=10){

        if(media>=7){
            saldacao(nome);
            printf("\nAprovado\n");
            printf("\nA media do aluno é: %.2f", media);
        }else{
            saldacao(nome);
            printf("\nReprovado\n");
            printf("\nA media do aluno é: %.2f", media);
        }
    }else{
        printf("Nota invalida");
    }
    
    return 0;
}