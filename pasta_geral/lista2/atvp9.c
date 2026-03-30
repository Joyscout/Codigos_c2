//nona questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_atual=2026, ano_nasc, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d",&ano_nasc);

    if(ano_nasc<=ano_atual){
        idade=ano_atual-ano_nasc;
        printf(" \nnascido em %d, possui tem %d anos ", ano_nasc, idade);
    
    }else{
        printf(" \nAno invalido");
    }

    return 0;
}