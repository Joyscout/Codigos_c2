#include <stdio.h>

struct produt {
    char nome[30];
    float preco;
    int id;
} Produtos;

int main(){
    struct produt Produtos[10];
    int i;
    for (i=0; i<10; i++){

    printf("\n - - - Produtos: %d - - - \n", i+1);
    printf("\n - nome: \n");
    scanf("%[^\n]", Produtos[i].nome);

    printf("\n - preço: \n");
    scanf("%f", &Produtos[i].preco);

    printf("\n - id: \n");
    scanf("%d", &Produtos[i].id);
    }
    
printf("\nLista de produtos: \n");

for(i=0; i<10; i++){
    printf("\n%d° produto: ", i + 1);
        printf("\nID: %d", Produtos[i].id);
        printf("\nNome: %s", Produtos[i].nome);
        printf("\nPreço: %.2f", Produtos[i].preco);
        printf("\n--------------------------------------");
}
    return 0;
}