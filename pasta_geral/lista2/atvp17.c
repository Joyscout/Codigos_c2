//Decima setima questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    float idade;
    char nome[20];
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite o sua idade: ");
    scanf("%f", &idade);
    
    if(idade<=10){
        printf(" \n %s devera pagar R$30.00",nome);
    
    }else if(idade>10 && idade<=29){
        printf(" \n %s devera pagar R$60.00",nome);
    
    }else if(idade>29 && idade<=45){
        printf(" \n %s devera pagar R$120.00",nome);
    
    }else if(idade>45 && idade<=59){
        printf(" \n %s devera pagar R$150.00",nome);

    }else if(idade>59 && idade <=65){
        printf(" \n %s devera pagar R$250.00",nome);

    }else if(idade>65){
        printf(" \n %s devera pagar R$450.00",nome);
    }

    return 0;
}