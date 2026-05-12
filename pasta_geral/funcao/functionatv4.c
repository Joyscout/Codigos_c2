#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int maio(int i, int vetor[], int tamanho){
    int maio=-9999;
    for(i=0; i<tamanho; i++){
        if(vetor[i]>maio){
            maio=vetor[i];
            return maio;
        }
    }
}
int main(){
    int i;
    int max;
    int vetor[15];
   for(i=0; i<4; i++){
       printf("Digite o %d° numero: ", i+1);
       scanf("%d", &vetor[i]);
   }
    limpar_tela();
    max=maio(i, vetor, 15);
    printf("o maior numero é %d", max);
    

    return 0;
}