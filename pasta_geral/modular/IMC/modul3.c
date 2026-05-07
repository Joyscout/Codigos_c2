#include <stdio.h>
#include "saude.h"

int main(){
    float peso, altura;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura (em cm): ");
    scanf("%f", &altura);

    float reslt=imc(peso, altura/100);

    result(reslt);
    return 0;

}