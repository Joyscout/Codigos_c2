#include <stdio.h>
#include <stdlib.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void inverte(int vetor[], int tamanho){
    int i;
    int ive;
    

for (i = 0; i < tamanho / 2; i++) {
        ive = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = ive;
    }
}

int main()
{
    int vetor[10];
    int i;
    int ivertidos[10];
    for (i=0; i<10; i++){
    printf("Digite o valor do %d° numero: ", i+1);
    scanf("%d", &vetor[i]);
    }
    for (i=0; i<10; i++){
        ivertidos[i]=vetor[i];
    }
    inverte(ivertidos, 10);
    limpar_tela();
    
    printf("Vetor original:");
    for (i=0; i<10; i++){
        printf("\n%d", vetor[i]);
    }
    printf("\n\n");
    printf("Vetor invertido:\n");
    for (i=0; i<10; i++){
        printf(" \n%d", ivertidos[i]);
    }

    return 0;
}