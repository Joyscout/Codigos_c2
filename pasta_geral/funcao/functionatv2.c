#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
float distancia(float x1, float y1, float x2, float y2){
    
    }

int main(){
    int n1, n2, m1, m2;
    int  dif1, dif2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &m1);
    printf("\nDigite o quarto numero: ");
    scanf("%d", &m2);
    limpar_tela();
    dif1=comparar(n1,n2);
    printf("o menor numero é %d\n", menor);
    

    return 0;
}