//while de primo
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i = 2;
    int primo = 1;
    
   printf("Digite um numero: ");
   scanf("%d", &num);

            while( i < num){
                if(num % i  == 0){
                primo = 0;
                }
                i++;
            if(primo==1){
                printf("primo");
            }else{
                printf("não é primo");
                
            }
            }
    return 0;
}
