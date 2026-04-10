//while do - MEDIA
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, soma=0, maior=-99999, menor=99999;
    int cont=1;
    float media;

    do{
        printf("Digite um numero: ");
        scanf("%d",&n);
        soma+=n;
        cont+=1;
        printf("");
        if(n>maior){
            maior=n;
        }
        if(n<menor){
            menor=n;
        }
    }
        while (cont<=5);
            media=soma/(cont-1);
            printf("\no menor numero: %d", menor);
            printf("\no maior numero: %d", maior);
            printf("\nsoma total: %d", soma);
            printf("\nmedia : %.2f", media);
        
 
    return 0;
}
