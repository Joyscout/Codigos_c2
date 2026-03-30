//while de senha correta
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int senha, senhap=12345;
    char usuario[20], usuariop[20]="admin";
    printf("Digite sua senha: ");
        scanf("%d", &senha);
    printf("Digite o usuario: ");
        scanf("%s", &usuario);
    while (senha!=senhap && usuario!=usuariop){
         
          printf("\n Senha ou usuario incorretos\nTente novamente\n");
           printf("Digite sua senha: ");
          scanf("%d", &senha);
            printf("Digite o usuario: ");
            scanf("%s", &usuario);
      
    }
     printf("\nLogin bem sucedido");
   

    return 0;
}
