#include <stdio.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int num_secreto=rand() % 50 *1;
    printf("%d", num_secreto);
    int chute;
    int acertou=0;
    printf("\t### Jogo de Adivinhação ###\n");
    printf("Tente adivinhar o número secreto entre 1 e 50!\n");
    
    for (int i = 1; i <=5; i++){
    printf("Tentativa %d de 5. Digite seu palpite: ", i);
    scanf("%d", &chute);

    if (chute == num_secreto){
        printf("\n\t Parabéns! vc acertou!!\n");
        acertou = 1;
        break;
    }else if (chute>num_secreto){
        printf("Dica:O numero secreto é menor que %d\n", chute);
    }else{
        printf("Dica:O numero secreto é maior que %d\n", chute);
    }

}
if (acertou == 0){
    printf("\n Suas tentativas acabaram! O numero secreto é %d", num_secreto);
}
return 0;
}