//Vigesima segunda questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int  distancia,  tipo_num;
    char  tipo[2];
    float consumo_estimado;
    printf("1- Carro A\n2- Carro B\n3- Carro C");
    printf("\nDigite o tipo do carro: ");
    scanf("%d", &tipo_num);
    
    printf("\nDigite a distancia percorrida em KM: ");
    scanf("%d", &distancia);
    
     if(tipo_num==1){
         strcpy(tipo,"A");
        consumo_estimado=distancia/12;
        printf(" \nO carro %s consumiu estimadamente: %.2f L em %d Km",tipo, consumo_estimado, distancia );
    
    }else if(tipo_num==2){
        strcpy(tipo,"B");
        consumo_estimado=distancia/9;
        printf(" \nO carro %s consumiu estimadamente: %.2f L em %d Km",tipo, consumo_estimado, distancia );
    
    }else if(tipo_num==3){
        strcpy(tipo,"C");
        consumo_estimado=distancia/8;
        printf(" \nO carro %s consumiu estimadamente: %.2f L em %d Km",tipo, consumo_estimado, distancia );
    }else{
        printf("\nValor Invalido");
    }

    return 0;
}