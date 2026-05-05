#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void  aguardar_enter     ();
void  limpar_buffer      ();
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
    int soma, soma_total, sub, op;
    float mult, div;

    do{

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    soma_total+=n1;
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    soma_total+=n2;
    limpar_tela();
    printf("\n1- Somar os valores: ");
    printf("\n2- Subtrair os valores: ");
    printf("\n3- Multiplicar os valores: ");
    printf("\n4- Dividir os valores: ");
    printf("\n0- Sair ");
     printf("\nDigite a opcao desejada: ");
     scanf("%d", op);

         switch (op)
        {
        case 1:
        soma = somar(n1, n2);
        printf("\nA soma dos numeros digitados é: %d", soma);
        limpar_buffer();
        break;
    
        case 2:
        sub = subtrair(n1, n2);
        printf("\nA subtração dos numeros digitados é: %d", sub);
        limpar_buffer();
        break;

        case 3:
        mult = multiplicacao(n1, n2);
        printf("\nA multiplicacao dos numeros digitados é: %.2f", mult);
        break;
     default:
        break;
     }
    
    div = divisao(n1, n2);
    
    printf("\nA divisao dos numeros digitados é: %.2f", div);
    }while(op!=0);
    return 0;
}
void aguardar_enter() {
    printf("\nPressione ENTER para voltar ao menu...");
    limpar_buffer();
}
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}