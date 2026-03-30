//while de senha correta
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, soma=0;
    printf("Digite um numero: ");
        scanf("%d", &num);
    while (num!=0){
          soma+=num;
          printf("\nDigite outro numero: ");
          scanf("%d", &num);
      
    }
     printf("\nzero digitado, codigo encerrado\n a soma total é %d", soma);
   

    return 0;
}
