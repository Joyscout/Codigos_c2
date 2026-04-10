//Decima sexta questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
   
    if(idade>=5 && idade<=7){
        printf(" \nInfantil A");
    
    }else if(idade>=8 && idade<=10){
        printf(" \nInfantil B");
        
    }else if(idade>=11 && idade<=13){
        printf(" \nJuventil A");
        
    }else if(idade>=14 && idade<=17){
        printf(" \nJuventil B");
        
    }else if(idade>=18){
        printf(" \nSênior");
    }
        

    return 0;
}