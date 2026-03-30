// Decima Sexta questao
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1, n2, resto=0, quoficiente=0;
    
   do{
        printf("Digite o divisor: ");
        scanf("%d",&n1);
        printf("\nDigite o dividendo: ");
        scanf("%d",&n2);
       
        if(n2>=0 && n1>0){
          
            resto=n2;
            while(resto>=n1){
                resto-=n1;
                quoficiente++;
            }
            printf("\n\nO quoficiente da divisão é: %d",quoficiente);
            printf("\n\nO resto da divisão é: %d",resto);
            break; 
            
        } else {
         
            printf("Valores inseridos invalidos. Tente novamente!\n\n");
        }
        
    
    } while(1); 
    
    return 0;
}