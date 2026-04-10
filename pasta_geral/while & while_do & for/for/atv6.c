#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    int soma=0;
    int primo;
    
    for(i=92; i<=1478; i++){
        primo=1;
        
        for(j=2;j<i;j++){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }
    if(primo == 1){
        soma += i;
        }
    }
    printf("%d", soma);

    return 0;
}
