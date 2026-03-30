//quarta questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char sexo, nome[255], nomesH21[50][255];
   int idade, i, cont=1, contH21=0;
    do{
            printf("Digite o sexo do individuo\nM - Masculino\nF - Feminino\nR: ");
            scanf(" %c",&sexo);
            if(sexo == 'f' || sexo== 'F' || sexo=='m' || sexo == 'M'){
                printf("Digite a idade do individuo: ");
                scanf("%d",&idade);
                printf("Digite o nome do individuo: ");
                scanf("%s",&nome);
                printf("\n\n");
               if((sexo == 'M' || sexo == 'm') && idade >21){
                   strcpy(nomesH21[contH21], nome);
                   contH21++;
               }
            }else{
                printf("\tValor invalido, tente novamente\n\n");
            }
            cont++;
           } while (cont<=20);
           if(contH21>0){
            for(i=0; i<contH21; i++){
                printf("\t== Nomes de homens de mais de 21 anos ==\n");
                printf("%d° Nome: %s\n",i+1, nomesH21[i]);
            }
           }else{
               printf("Nenhum nome de homem com mais de 21 anos");
           }
    return 0;
}