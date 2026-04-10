//sexta questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_prestacao, salario_bruto, valor_maximo_prestacao;

    printf("Digite o seu salario bruto: ");
    scanf("%f",&salario_bruto);
    printf("\nDigite o seu valor prestação: ");
    scanf("%f",&valor_prestacao);
    
    valor_maximo_prestacao=salario_bruto*0.30;
   
    if(valor_prestacao<=valor_maximo_prestacao){
        printf("\nEmpréstimo permitido");
    }else{
        printf("\nEmpréstimo negado");
    }

    return 0;
}