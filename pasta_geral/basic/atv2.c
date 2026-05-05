//Todos Calculos
#include <stdio.h>
#include<stdlib.h>
int main()
{

float n1,n2,soma,sub,divi,mult;

    printf("digite a primeira nota: "); 
    scanf("%f", &n1);

    printf("\ndigite a segunda nota: ");
    scanf("%f", &n2);
    
    
    soma = (n1+n2);
    
    sub = (n2-n1);
    
    divi = (n2/n1);
    
    mult = (n1*n2);
    
    
    
     printf("soma: %.1f", soma);
     printf("\nsubtração: %.1f",sub);
     printf("\ndivisão %.1f",divi);
     printf("\nmultiplicação %.1f", mult);
     
    
    return 0;
}