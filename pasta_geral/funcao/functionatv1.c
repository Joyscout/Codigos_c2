#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int comparar(int n1, int n2){
    if(n1<n2){
        return n1;
    }else{
        return n2;
    }
}

int main(){
    int n1, n2;
    int  menor;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    limpar_tela();
    menor=comparar(n1,n2);
    printf("o menor numero é %d\n", menor);
    

    return 0;
}