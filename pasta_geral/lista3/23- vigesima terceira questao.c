// Vigesima terceira questao
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50], sexo;
    int idade;
    float peso, altura;
    char nomeMaisAlta[50] = "", nomeMaisPesado[50] = "";
    float maiorPesoMasc = 0, maiorAlturaFem = 0;
    int totalAtletas = 0,somaIdade = 0;


    do {
        printf("Digite '@' no nome para encerrar.\n\n");
        printf("Nome do atleta: ");
        scanf("%s", nome);

   
        if (strcmp(nome, "@") == 0) {
            break;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);

        totalAtletas++;
        somaIdade += idade;

        if (sexo == 'F' || sexo == 'f') {
            if (altura > maiorAlturaFem) {
                maiorAlturaFem = altura;
                strcpy(nomeMaisAlta, nome);
            }
        } else if (sexo == 'M' || sexo == 'm') {
            if (peso > maiorPesoMasc) {
                maiorPesoMasc = peso;
                strcpy(nomeMaisPesado, nome);
            }
        }
   
    } while (1); 

    printf("\n--- Resultados ---\n");
    if (totalAtletas > 0) {
        if (strlen(nomeMaisAlta) > 0)
            printf("Atleta feminina mais alta: %s (%.2f m)\n", nomeMaisAlta, maiorAlturaFem);
        else
            printf("Nenhuma atleta feminina cadastrada.\n");

        if (strlen(nomeMaisPesado) > 0)
            printf("Atleta masculino mais pesado: %s (%.2f kg)\n", nomeMaisPesado, maiorPesoMasc);
        else
            printf("Nenhum atleta masculino cadastrado.\n");

        printf("Media de idade dos atletas: %.2f anos\n", (float)somaIdade / totalAtletas);
    } else {
        printf("Nenhum atleta foi cadastrado.\n");
    }

    return 0;
}