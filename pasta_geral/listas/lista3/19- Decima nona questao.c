// Decima nona questao
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numTurmas, numAlunos;
    int i, j;
    float nota, somaNotas, media;
    int aprovados = 0;
    int totalAlunos = 0;
    int totalReprovados = 0;

    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);

    for (i = 1; i <= numTurmas; i++) {
        printf("\n--- Turma %d ---\n", i);
        printf("Quantidade de alunos na turma %d: ", i);
        scanf("%d", &numAlunos);

        somaNotas = 0;
        totalAlunos += numAlunos; 

        for (j = 1; j <= numAlunos; j++) {
            printf("Nota do aluno %d: ", j);
            scanf("%f", &nota);

            somaNotas += nota;

       
            if (nota >= 7.0) {
                aprovados++;
            } else {
                totalReprovados++;
            }
        }

        media = somaNotas / numAlunos;
        printf("Média da turma %d: %.2f\n", i, media);
    }

    printf("\nResultados Gerais:");
    printf("\nQuantidade de alunos aprovados: %d", aprovados);
    
    if (totalAlunos > 0) {
        float percentualReprovados = ((float)totalReprovados / totalAlunos) * 100;
        printf("\nPercentual de reprovados: %.2f%%", percentualReprovados);
    } else {
  
    return 0;
}