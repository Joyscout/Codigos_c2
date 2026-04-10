//positivos e negativos
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float num;
    int contneg=0, contpos=0;
    
    for(i=1; i<=5; i++){
        printf("Digite um número: ");
        scanf("%f", &num);
        
        if(num>0){
            contpos+=1;
        }else{
            contneg+=1;
        }
    }
        printf("A quantidade de positivos eh %d\nA quantidade de negativos eh %d ",contpos,contneg);
  
    return 0;
}
