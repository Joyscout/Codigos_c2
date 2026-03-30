//quinta questao
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1, n2, resu=0, i;
    
            printf("Digite o multiplicando: ");
            scanf("%d",&n1);
            printf("\nDigite o multiplicar: ");
            scanf("%d",&n2);
            
            for(i=0; i<n1; i++){
                resu+=n2;
            }
            printf("o produto é: %d", resu);
           
    return 0;
}