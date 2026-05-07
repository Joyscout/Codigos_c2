#include <stdio.h>
#include "geometria.h"

int main(){
    float raio, base, altura;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    
    printf("A area do circulo é: %.2f", areaCirculo(raio));

    printf("\nDigite a base: ");
    scanf("%f", &base);

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    printf("\nA Area do retangulo: %.2f", areaRetangulo(base, altura));
    return 0;

}