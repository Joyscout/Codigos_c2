#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int subtrair(float n1, float n2){
    return n2-n1;
}
int somar(float n1, float n2){
    return n1+n2;
}
float multiplicacao(float n1, float n2){
    return n1*n2;
}
float divisao(float n1, float n2){
    return n2/n1;
}
int main(){
    int n1, n2;
    int soma, sub;
    float mult, div;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    limpar_tela();
    soma = somar(n1, n2);
    sub = subtrair(n1, n2);
    mult = multiplicacao(n1, n2);
    div = divisao(n1, n2);
    printf("\nA soma dos numeros digitados é: %d", soma);
    printf("\nA subtração dos numeros digitados é: %d", sub);
    printf("\nA multiplicacao dos numeros digitados é: %.2f", mult);
    printf("\nA divisao dos numeros digitados é: %.2f", div);

    return 0;
}