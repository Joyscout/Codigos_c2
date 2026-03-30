//Decima segunda questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);
   
    if(idade<18){
        printf(" \nMenor de idade");
    }else if(idade>=18 && idade<=65){
        printf(" \nMaior de idade");
    }else{
        printf(" \nVelhice");
    }

    return 0;
}