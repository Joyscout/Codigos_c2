#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
float mediavetor(float vetor[], int tamanho){
    float soma= 0;
    int count= 0;
    int i;
    float media;
    for (i=0; i<tamanho; i++){
        soma+=vetor[i];
        count++;
    }
    media= soma/count;
    return media;
}

int main(){
    float vetor[8];
    float resu;
    int i;
    
      
    for(i=0; i<8; i++){
        printf("Digite o %d° valores do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }

    resu = mediavetor(vetor, 8);
    limpar_tela();
    printf("media aritmetica do vetor: %.2f\n", resu);
    return 0;
}