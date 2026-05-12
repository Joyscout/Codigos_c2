#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
float somarvetor(int vetor[], int tamanho){
    int soma= 0;
    int i;

    for (i=0; i<tamanho; i++){
        soma+=vetor[i];
    }
    return soma;
}

int main(){
    int vetor[10];
    int resu, i;
      
    for(i=0; i<10; i++){
        printf("Digite o %d° valores do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    resu = somarvetor(vetor, 10);
    limpar_tela();
    printf("Soma do vetor: %d\n", vetor[10]);
    return 0;
}