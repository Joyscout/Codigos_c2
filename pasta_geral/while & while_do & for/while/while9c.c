//while de senha tentativa 3 x
#include <stdio.h>
#include <stdlib.h>
int main(){
  
    int senha, tentativa=1;
    
   printf("Digite a sua senha: ");
   scanf("%d", &senha);
   
   while(senha!= 1234){
       if(tentativa==3){
           printf("numero de tentativas ultrapassada");
           break;
        }
        printf("Senha invalida\ntente novamente: ");
         scanf("%d", &senha);
         tentativa+=1;
   }
   if(senha ==1234){

       printf("Bem-Vindo");
   }
    
    return 0;
}
