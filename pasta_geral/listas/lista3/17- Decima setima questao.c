// Decima setima questao
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num_pedido, quant;
   int dia, mes, ano;
   float preco_uni, preco_total=0;
   float total_compra=0;
    
   do{
        printf("\n0 -  para cessar o codigo\n");
    	printf("Digite o numero do pedido: ");
    	scanf("%d",&num_pedido);
        if (num_pedido == 0) {
            break; 
        }
       printf("\nDigite a data na ordem (dia/mes/ano)\n>: ");
       scanf("%d %d %d", &dia, &mes, &ano);
    
      printf("\nDigite o preço unitario do produto: ");
      scanf("%f",&preco_uni);
      
      printf("\nDigite a qauntidade do produto: ");
      scanf("%d",&quant);
      
      preco_total=preco_uni*quant;
      total_compra+=preco_total;
        
        printf("-> O preço total deste pedido: R$ %.2f\n\n", preco_total);
    } while(num_pedido!=0); 
    
    printf("\nValor total da compra: R$ %.2f\n", total_compra);
    return 0;
}