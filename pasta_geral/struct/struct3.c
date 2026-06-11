#include <stdio.h>

struct indv {
    char nome[30];
    char endereco[100];
    int idade;
} Pessoa;

int main(){
    struct indv Pessoa;

    printf("\n - nome: \n");
    scanf("%[^\n]", Pessoa.nome);

    printf("\n - Endereço: \n");
    scanf("%[^/n]", Pessoa.endereco);

    printf("\n - idade: \n");
    scanf("%d", &Pessoa.idade);
    
printf("Dados do indivíduo: \n");
    
        printf("\nNome: %s", Pessoa.nome);
        printf("\n Endereço: %s", Pessoa.endereco);
        printf("\nIdade: %d", Pessoa.idade);
        printf("\n--------------------------------------");

    return 0;
}