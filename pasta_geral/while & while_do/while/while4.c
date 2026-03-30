//while adivinhe de 1 a 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int num;
    int Secret_num = rand() % 100 *1;
    printf("%d",Secret_num);
    printf("Adivinhe um numero entre 1 e 100: ");
    scanf("%d", &num);
    
    while (num!=Secret_num){
          printf("\n ERROU\n");
          printf("\nDigite outro numero: ");
          scanf("%d", &num);
      
    }
     printf("\nACERTOU\n");
   

    return 0;
}

