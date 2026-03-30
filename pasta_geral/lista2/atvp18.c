//Decima oitava questao

#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    
    printf("Digite um número corespondente aou um mês do ano");
    scanf("%d",op);
    printf("\n");
    switch (op)
    {
    case 1:
        printf("1- Janeiro");
        break;
    case 2:
        printf("2- Fevereiro");
        break;
    case 3:
        printf("3- Março");
        break;
    case 4:
        printf("4- Abril");
        break;
    case 5:
        printf("5- Maio");
        break;
    case 6:
        printf("6- Junho");
        break;
    case 7:
        printf("7- Julho");
        break;
    case 8:
        printf("8- Agosto");
        break;
    case 9:
        printf("9- Setembro");
        break;
    case 10:
        printf("10- Outubro");
        break;
    case 11:
        printf("11- Novembro");
        break;
    case 12:
        printf("12- Dezembro");
        break;
    
    default:
        printf("Valor invalido");
        break;
    }

    return 0;
}