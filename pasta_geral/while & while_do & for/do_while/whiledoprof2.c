//while do - MEDIA - PROF
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n, soma=0, maior, menor;
    int cont=1;
    float media;

    do{
        printf("Digite um numero: ");
        scanf("%f",&n);
        soma+=n;
        cont+=1;
        if(n==1){
            maior=n;
            menor=n;
        }else{
            if(n>maior){
                maior=n;
            }
            if(n<menor){
                menor=n;
            }
        }
    }
        while (cont<=5);
            media=soma/(cont-1);
            printf("\no menor numero: %.2f", menor);
            printf("\no maior numero: %.2f", maior);
            printf("\nsoma total: %.2f", soma);
            printf("\nmedia : %.2f", media);
        
 
    return 0;
}
