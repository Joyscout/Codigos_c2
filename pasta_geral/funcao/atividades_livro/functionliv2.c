//maior - menor
#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int menor(int n1, int n2){
    if(n1<n2){
        return n1;
    }else{
        return n2;
    }
}
int maior(int n1, int n2){
    if(n1>n2){
        return n1;
    }else{

        return n2;
    }
}
int main(){
    int n1, n2;
   
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    limpar_tela();
    int max=maior(n1,n2);
    int mim=menor(n1,n2);
    printf("o menor numero é %d\no maior numero é %d\n", mim, max);
    

    return 0;
}