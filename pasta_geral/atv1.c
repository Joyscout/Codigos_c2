//Media Aritmetica
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, md;
    printf("Hello World\n");
    
    printf("Digite a  nota 1: ");
    scanf("%f", &n1);
    printf("\nDigite a  nota 2: ");
    scanf("%f", &n2);
    printf("\nDigite a  nota 3: ");
    scanf("%f", &n3);
    
    md=(n1+n2+n3)/3;
    
    printf("\n media total: %.1f", md, "\n");


    return 0;
}