//vigesima oitava questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, idade, totalPessoas = 5; 
    float altura, peso;
    int mais50 = 0, conta1020 = 0;
    float somaAlturas1020 = 0;
    int pesoMenor40 = 0;

    for (i = 1; i <= totalPessoas; i++) {
        printf("Pessoa %d - Digite a idade: ", i);
        scanf("%d", &idade);
        printf("Pessoa %d - Digite a altura (m): ", i);
        scanf("%f", &altura);
        printf("Pessoa %d - Digite o peso (kg): ", i);
        scanf("%f", &peso);

        if (idade > 50) {
            mais50++;
        }
        if (idade >= 10 && idade <= 20) {
            somaAlturas1020 += altura;
            conta1020++;
        }
        if (peso < 40) {
            pesoMenor40++;
        }
    }

    printf("\nResultados:\n");
    printf("- Quantidade de pessoas com mais de 50 anos: %d\n", mais50);

    if (conta1020 > 0) {
        printf("- Media das alturas (10-20 anos): %.2f m\n", somaAlturas1020 / conta1020);
    } else {
        printf("- Media das alturas (10-20 anos): Nenhuma pessoa nesta faixa\n");
    }

    float porcentagem = ((float)pesoMenor40 / totalPessoas) * 100;
    printf("- Porcentagem de pessoas com peso inferior a 40kg: %.2f%%\n", porcentagem);

    return 0;
}