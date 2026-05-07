#include "saude.h"
#include <stdio.h>
float imc(float peso, float altura){
 
    return peso/(altura*altura);
}

void result(float imc){
    if(imc<18.5){
        printf("\nAbaixo do peso - IMC: %.2f", imc);
    }else if(imc>=18.5 && imc <=24.9){
        printf("\nPeso normal - IMC: %.2f", imc);
    }else if(imc>=25 && imc<=29.9){
        printf("\nSobrepeso - IMC: %.2f", imc);
    }else if(imc>=30 && imc<=34.9){
        printf("\nObesidade Grau I - IMC: %.2f", imc);
    }else if(imc>=35 && imc<=39.9){
        printf("Obesidade Grau II - IMC: %.2f", imc);
    }else{
        printf("Obesidade Grau III - IMC: %.2f", imc);
    }

}

