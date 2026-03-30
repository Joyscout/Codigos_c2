// Decima oitava questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int num_conta;
  char nome[100];
    int quantDias;
    float taxa_Servico, valor_Total_Cliente, total_Faturado_Pousada = 0;
    
   do{
        printf("\n0 -  para cessar o codigo\n");
    	printf("Digite o numero da conta: ");
    	scanf("%d",&num_conta);
        if (num_conta == 0) {
            break; 
        }
       printf("\nDigite o nome do cliente: ");
       scanf("%s", &nome);
    
      printf("\nDigite a quantidade de dias: ");
      scanf("%d",&quantDias);
      
     if(quantDias<10){
         taxa_Servico = 15;
     }else{
         taxa_Servico = 8;
     }
     valor_Total_Cliente=(30+taxa_Servico)*quantDias;
     total_Faturado_Pousada+=valor_Total_Cliente;
        
        printf("\n--- Extrato do Cliente ---\n");
        printf("Nome: %s\n", nome);
        printf("Numero da Conta: %d\n", num_conta);
        printf("Valor Total da Conta: R$ %.2f\n", valor_Total_Cliente);
        printf("--------------------------\n\n");
    } while(1); 
    
printf("Total faturado pela pousada: R$ %.2f\n", total_Faturado_Pousada);
return 0;
}