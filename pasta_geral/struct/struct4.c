#include <stdio.h>

typedef struct Alunos {
    char nome[30];
    int matricula;
    char curso[50];
} alunos;

int main(){
    struct Alunos seres[5];
    int i;
    
    for(i=0;i<5;i++){
        
    printf("Aluno %d\n", i+1);
    printf("\n - nome: \n");
    scanf("%[^\n]", Alunos[i].nome);

    printf("\n - Numero de matricula: \n");
    scanf("%d", &Alunos[i].matricula);

    printf("\n - Curso: \n");
    scanf("%[^\n]", Alunos[i].curso);
    }
    
    for (i=0; i<5; i++){
        printf("Dados do aluno %d: \n", i+1);
    
        printf("\nNome: %s", Alunos[i].nome);
        printf("\nMatricula: %d", Alunos[i].matricula);
        printf("\nCurso: %s", Alunos[i].curso);
        printf("\n--------------------------------------");
}
    return 0;
}