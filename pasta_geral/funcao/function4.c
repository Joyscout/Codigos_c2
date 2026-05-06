#include <stdlib.h>
#include <stdio.h>

float soma_total=0;
float n1, n2;

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void  aguardar_enter     ();
void  limpar_buffer      ();

void calculo(){
     printf("\nDigite o primeiro numero: ");
    scanf("%f", &n1);
    soma_total+=n1;
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);
    soma_total+=n2;
    
}
int subtrair(float n1, float n2){
    return n1-n2;
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

    float soma, sub, mult, div;
    int op;
    do{
   
    limpar_tela();
    printf("\n1- Somar os valores: ");
    printf("\n2- Subtrair os valores: ");
    printf("\n3- Multiplicar os valores: ");
    printf("\n4- Dividir os valores: ");
    printf("\n0- Sair ");
     printf("\nDigite a opcao desejada: ");
     scanf("%d", &op);

         switch (op)
        {
        case 1:
        calculo();
        soma = somar(n1, n2);
        printf("\nA soma dos numeros digitados é: %.2f", soma);
        printf("\nA soma total dos valores é de: %.2f", soma_total);
        aguardar_enter();
        limpar_buffer();
        break;
        
        case 2:
        calculo();
        sub = subtrair(n1, n2);
        printf("\nA subtração dos numeros digitados é: %.0f", sub);
        aguardar_enter();
        limpar_buffer();
        break;
        
        case 3:
        calculo();
        mult = multiplicacao(n1, n2);
        printf("\nA multiplicacao dos numeros digitados é: %.2f", mult);
        aguardar_enter();
        limpar_buffer();
        break;
        
        case 4:
        calculo();
        if (n2==0){
            printf("\nERRO!\nNumero Negativo Inserido");
        }else{

            div = divisao(n1, n2);
            printf("\nA divisao dos numeros digitados é: %f", div);
        }
        aguardar_enter();
        limpar_buffer();
        break;

        case 0:
        printf("Saindo...");
        aguardar_enter();
        limpar_buffer();
        break;

        default:
        printf("Valor digitado invalido.\nTente novamente");
        aguardar_enter();
        limpar_buffer();
        break;
     }
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