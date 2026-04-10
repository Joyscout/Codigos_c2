// Vigesima primeira questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    float rendaPessoal, rendaFamiliar, gastoAlimentacao, gastoOutros;
    int totalAlunos = 0;
    int alunosGastoAlto = 0;
    int alunosRendaPessoalMaior = 0;
    float somaPorcentagemAlimentacao = 0;
    float somaPorcentagemOutros = 0;

    do {
        printf("\n--- Dados do Aluno %d ---\n", totalAlunos + 1);
        printf("\n0 -  para cessar o codigo\n");
        printf("Renda pessoal: ");
        scanf("%f", &rendaPessoal);

        if (rendaPessoal == 0) {
            break;
        }

        printf("Renda familiar: ");
        scanf("%f", &rendaFamiliar);
        printf("Total gasto com alimentacao: ");
        scanf("%f", &gastoAlimentacao);
        printf("Total gasto com outras despesas: ");
        scanf("%f", &gastoOutros);

        totalAlunos++;

      
        if (gastoOutros > 200.00) {
            alunosGastoAlto++;
        }

        if (rendaPessoal > rendaFamiliar) {
            alunosRendaPessoalMaior++;
        }

        if (rendaFamiliar > 0) {
            somaPorcentagemAlimentacao += (gastoAlimentacao / rendaFamiliar) * 100;
            somaPorcentagemOutros += (gastoOutros / rendaFamiliar) * 100;
        }

    } while (rendaPessoal != 0);

    if (totalAlunos > 0) {
        printf("\n--- Resultados ---\n");
        printf("Porcentagem de alunos que gastam acima de R$200 com outras despesas: %.2f%%\n",alunosGastoAlto / totalAlunos) * 100);
        printf("Numero de alunos com renda pessoal maior que a familiar: %d\n", alunosRendaPessoalMaior);
        printf("Media de gasto com alimentacao em relacao a renda familiar: %.2f%%\n", somaPorcentagemAlimentacao / totalAlunos);
        printf("Media de gasto com outras despesas em relacao a renda familiar: %.2f%%\n", somaPorcentagemOutros / totalAlunos);
    } else {
        printf("\nNenhum aluno cadastrado.\n");
    }

    return 0;
}