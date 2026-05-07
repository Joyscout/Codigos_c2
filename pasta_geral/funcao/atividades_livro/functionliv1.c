//0 a 9
#include <stdlib.h>
#include <stdio.h>

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int determin(int n1){
    if(n1>=0 && n1<=9){
        printf("O valor digitado é um valor decimal");
    }else{
        printf("O valor digitado não é um valor decimal");
    }
}
int main(){
    int n1;
    printf("Digite um numero entre 0 e 9 numero: ");
    scanf("%d", &n1);
    limpar_tela();
    determin(n1);
    

    return 0;
}