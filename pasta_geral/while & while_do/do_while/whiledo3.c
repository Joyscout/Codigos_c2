//while do - funcionarios A B C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   float salario_minimo=1621, salario_total=0;
   char sexo;
   int quant, contH=0, contM=0, total_pecas=0, code, opnum;


    do{
        printf("Digite o numero do operario: ");
        scanf("%d",&opnum);
        if(opnum>0){
            printf("Digite a quantidade de peças que o mesmo produziu: ");
            scanf("%d",&quant);
            printf("Digite o sexo do funcionario: ");
            scanf("%s",&sexo);
         
            if(sexo=='M' || sexo=='m'){
                contH+=1;
            }
            if(sexo=='F' || sexo=='f'){
                contM+=1;
            }
            
            if(quant<=30){
                total_pecas+=quant;
            salario_total+=salario_minimo;
            }
            else if(quant>=31 && quant<=35){
                total_pecas+=quant;
                salario_total+=(salario_minimo*1.03);
            }
            else if(quant>35){
              total_pecas+=quant;
              salario_total+=(salario_minimo*1.05);    
            }
        }else if(opnum ==0){
            break;
        }
        
           }  while (quant!=0);
            
            printf("\nQuantidade de funcionarios homens: %d",contH);
            printf("\nQuantidade de funcionarias mulheres: %d",contM);
            printf("\nQuantidade total de peças: %d",total_pecas);
            printf("\nSalario total de todos os funcionarios: %.2f",salario_total);
 
    return 0;
}
