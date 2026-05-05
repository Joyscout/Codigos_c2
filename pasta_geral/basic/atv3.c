//Media Ponderada
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, p1, p2, p3, mdp;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite o peso referente a nota 1: ");
    scanf("%f", &p1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite o peso referente a nota 2: ");
    scanf("%f", &p2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    printf("\nDigite o peso referente a nota 3: ");
    scanf("%f", &p3);
    
    
    
    mdp=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    
    printf("A media Ponderada é %.1f", mdp);
    

    return 0;
}