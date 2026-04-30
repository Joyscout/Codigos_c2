
#include <stdio.h>


int main() {

 int A[5][5], B[5][5], C[5][5];
int soma[5][5];
int n, m;
int i, j;
int somaDiagonal = 0;

printf("Digite o numero de linhas (max 5): ");
scanf("%d", &n);

printf("Digite o numero de colunas (max 5): ");
scanf("%d", &m);


printf("Digite a matriz A:\n");
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
scanf("%d", &A[i][j]);
}
}


printf("Digite a matriz B:\n");
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
 scanf("%d", &B[i][j]);
}
 }
for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
soma[i][j] = A[i][j] + B[i][j]; //+a C[i][j];
 }
 }

for (i = 0; i < n && i < m; i++) {
somaDiagonal = somaDiagonal + A[i][i] + B[i][i]; // + C[i][i];
}
printf("\nSoma das matrizes:\n");
 for (i = 0; i < n; i++) {
for (j = 0; j < m; j++) {
printf("%d ", soma[i][j]);
}
printf("\n");
}

printf("\nSoma da diagonal principal das tres matrizes: %d\n", somaDiagonal);

return 0;
}

