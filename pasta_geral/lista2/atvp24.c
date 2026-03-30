//Vigesima quarta questao

#include <stdio.h>
#include <stdlib.h>


int main(){

    int ultimo_digito;

    printf("Digite o ultimo numero da placa: ");
    scanf("%d", &ultimo_digito);

    if(ultimo_digito == 1){
        printf("Renovacao em Janeiro");
    }
    else if(ultimo_digito == 2){
        printf("Renovacao em Fevereiro");
    }
    else if(ultimo_digito == 3){
        printf("Renovacao em Marco");
    }
    else if(ultimo_digito == 4){
        printf("Renovacao em Abril");
    }
    else if(ultimo_digito == 5){
        printf("Renovacao em Maio");
    }
    else if(ultimo_digito == 6){
        printf("Renovacao em Junho");
    }
    else if(ultimo_digito == 7){
        printf("Renovacao em Julho");
    }
    else if(ultimo_digito == 8){
        printf("Renovacao em Agosto");
    }
    else if(ultimo_digito == 9){
        printf("Renovacao em Setembro");
    }
    else if(ultimo_digito == 0){
        printf("Renovacao em Outubro");
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}