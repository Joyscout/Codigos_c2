//while de saque
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valors, valort=15000;
    printf("Digite um valor a ser sacado: ");
        scanf("%d", &valors);
    while (valors>=valort || valors % 10 != 0){
          printf("\n Saque não permitido\n");
          printf("\nDigite um valor a ser sacado: ");
          scanf("%d", &valors);
      
    }
     printf("\nSaque permitido");
   

    return 0;
}

