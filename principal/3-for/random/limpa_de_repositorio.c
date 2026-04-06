#include <stdio.h>
#include <stdlib.h>
int n1;
void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    printf("Digite algum numero: ");
    scanf("%d", &n1);
    limparTela();
    printf("O numero digitado foi %d", n1);
    return 0;
}
