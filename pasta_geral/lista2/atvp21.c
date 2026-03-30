//Vigesima primeira questao

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int dias, tipo;
    char  livro[255], usuario[10];
    
    printf("Digite o nome do livro: ");
    scanf("%s", &livro);
    
    printf("1- professor\n2- aluno");
    printf("\nQual tipo de usuario acima a vossa pessoa é?: ");
    scanf("%d",&tipo);
    
     if(tipo==1){
         dias=10;
         strcpy(usuario,"professor");
        printf(" \nO usuario (%s) tem (%d) dias para devolver o livro: (%s)",usuario, dias, livro);
    
    }else if(tipo==2){
        dias=3;
        strcpy(usuario,"aluno");
        printf(" \nO usuario (%s) tem (%d) dias para devolver o livro: (%s)",usuario, dias, livro);

    }else{
        printf("\nTipo de usuario invalido");
    }

    return 0;
}