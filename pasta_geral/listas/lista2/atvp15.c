//Decima quinta questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_compra, valor_venda;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    
     if(valor_compra<20){
        valor_venda=valor_compra*1.45;
        printf(" \nO valor da venda foi de: R$ %.2f",valor_venda);
    
    }else{
        valor_venda=valor_compra*1.30;
        printf(" \nO valor da venda foi de: R$ %.2f",valor_venda);

    }
    
        
    

    return 0;
}