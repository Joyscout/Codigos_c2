//Vigesima questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldo_medio, valor_credito;
    printf("Digite o seu saldo medio: ");
    scanf("%f", &saldo_medio);
    
     if(saldo_medio>=0 && saldo_medio<=500){
        
        printf(" \nO saldo medio é de: R$ %.2f e nenhum credito a mais",saldo_medio);
    
    }else if(saldo_medio>=501 && saldo_medio<=1000){
        valor_credito=saldo_medio*1.30;
        printf(" \nO saldo medio é de: R$ %.2f e com 30 porcento de credito é: R$ %.2f",saldo_medio, valor_credito);

    }
    else if(saldo_medio>=1001 && saldo_medio<=3000){
        valor_credito=saldo_medio*1.40;
        printf(" \nO saldo medio é de: R$ %.2f e com 40 porcento de credito é: R$ %.2f",saldo_medio, valor_credito);
    }
    else if(saldo_medio>=3001){
        valor_credito=saldo_medio*1.50;
        printf(" \nO saldo medio é de: R$ %.2f e com 50 porcento de credito é: R$ %.2f",saldo_medio, valor_credito);
    }else{
        printf("\nValor invalido");
    }

    return 0;
}