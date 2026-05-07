#include <stdio.h>
#include "media.h"

int main(){
    float n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    float med=calculo(n1, n2, n3);

    result(med);
    return 0;

}