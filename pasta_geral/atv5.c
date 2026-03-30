//if else desconto
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float vl, vld;
    printf("Digite o valor: ");
    scanf("%f", &vl);
    
    if(vl>100){
        vld=vl-(vl*0.10);
        printf("valor com o desconto de 10 porcento, a ser pago foi de %.2f ", vld);
    
    }else{
       printf("o valor a ser pago é de %.2f", vl);  
    }
    
    return 0;
}