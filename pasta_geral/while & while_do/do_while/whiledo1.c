//while do
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, soma=0;

    do{
        printf("Digite um numero positivo para a soma\nnegativo e neutro para sair\nR°: ");
        scanf("%d",&n);

        if(n>=0){
            soma+=n;
        }
    }
        while (n>=!-1);{
            printf("\n\nsoma total: %d", soma);
        }
 
    return 0;
}
