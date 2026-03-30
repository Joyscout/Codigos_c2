#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    printf("Limpar a tela...\n");
    limparTela();
    printf("Tela limpa!\n");
    return 0;
}
