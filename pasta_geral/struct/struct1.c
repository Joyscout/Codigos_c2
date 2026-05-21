#include <stdio.h>

struct livros {
    char titulo[50];
    char autor[50];
    char categoria[30];
    int id;
} Livro;

int main(){
    struct livros Livro[10];
    int i;
    for (i=0; i<10; i++){

    printf("\n - - - Livro: %d\n\n", i+1);

    printf("\n - Titulo: \n");
    scanf("%[^\n]", Livro[i].titulo);

    printf("\n - Autor: \n");
    scanf("%[^\n]", Livro[i].autor);

    printf("\n - Categoria: \n");
    scanf("%[^\n]", Livro[i].categoria);

    printf("\n - Identificador: \n");
    scanf("%d", &Livro[i].id);
   
    }

printf("\nLista de livros: \n\n\n");

for(i=0; i<10; i++){
    printf("\nLivro #%d", i + 1);
        printf("\nID: %d", Livro[i].id);
        printf("\nTitulo: %s", Livro[i].titulo);
        printf("\nAutor: %s", Livro[i].autor);
        printf("\nCategoria: %s", Livro[i].categoria);
        printf("\n--------------------------------------");
}
    return 0;
}