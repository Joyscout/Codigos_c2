//Decima quarta questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;
    printf("Digite o seu salario: ");
    scanf("%f", &valor);
    
   
    if(valor<=600){
        printf(" \nO valor do salario é de %.2f",valor);
    
    }else if(valor>600 && valor<=1200){
        valor=valor-(valor*0.20);
        printf(" \nO valor do salario com 20 porcento de desconto é de %.2f",valor);
    
    }else if(valor>1200 && valor<=2000){
        valor=valor-(valor*0.25);
        printf(" \nO valor do salario com 25 porcento de desconto é de %.2f",valor);
    
    }else if(valor>2000){
        valor=valor-(valor*0.30);
        printf(" \nO valor do salario com 30 porcento de desconto é de %.2f",valor);
    }

    return 0;
}