//Vigesima terceira questao
#include <stdio.h>
#include <stdlib.h>

int main(){

    int prato, sobremesa, bebida;
    int cal=0;

    printf("1- Vegetariano (180 cal)\n2- Peixe (230 cal)\n3- Frango (250 cal)\n4- Carne (350 cal)\n");
     printf("Escolha o prato: ");
    scanf("%d",&prato);

    if(prato == 1){
        cal+=180;
    }
    else if(prato == 2){
        cal+=230;
    }
    else if(prato == 3){
        cal+=250;
    }
    else if(prato == 4){
       cal+=350;
    }
    
    printf("\n1- Abacaxi (75 cal)\n2- Sorvete diet (110 cal)\n3- Mousse diet (170 cal)\n4- Mousse chocolate (200 cal)\n");
    printf("\nEscolha a sobremesa: ");
    scanf("%d",&sobremesa);
    
    if(sobremesa == 1){
        cal+=75;
    }
    else if(sobremesa == 2){
        cal+=110;
    }
    else if(sobremesa == 3){
        cal+=170;
    }
    else if(sobremesa == 4){
       cal+=200;
    }
    printf("1- Cha (20 cal)\n2- Suco de laranja (70 cal)\n3- Suco de melao (100 cal)\n4- Refrigerante diet (65 cal)\n");
    printf("\nEscolha a bebida:\n");
    scanf("%d",&bebida);
    
    if(bebida == 1){
        cal+=20;
    }
    else if(bebida == 2){
        cal+=70;
    }
    else if(bebida == 3){
        cal+=100;
    }
    else if(bebida == 4){
       cal+=65;
    }
    
     printf("\nTotal de calorias da refeicao: %d cal\n", cal);
    return 0;
}