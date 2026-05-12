#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int parimpar(int vetor[], int tamanho){
    int countPar=0;
    int countImpar=0;
    int i;
    for(i=0; i<tamanho; i++){
        if(vetor[i] % 2 == 0){
            countPar++;
        
        }
    }
        return countPar;
}
int main(){
    int i;
    int pares;
    int impares;
    int vetor[20];
   for(i=0; i<20; i++){
       printf("Digite o %d° numero: ", i+1);
       scanf("%d", &vetor[i]);
   }
    limpar_tela();
    pares=parimpar(vetor, 20);
    
    printf("a quantidade de numeros pares é de: %d", pares);
    return 0;
}