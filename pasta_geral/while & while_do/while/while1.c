//while de senha correta
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int senha, senhap=12345;
    printf("Digite sua senha: ");
        scanf("%d", &senha);
    while (senha!=senhap){
          printf("\n incorreta\ntente novamente\n\n");
          scanf("%d", &senha);
      
    }
     printf("\nsenha correta");
   

    return 0;
}
