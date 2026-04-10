//decima questão
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&n2);
    printf("\nDigite o terceiro numero: ");
    scanf("%d",&n3);

    if(n1>=n2 && n1>=n3 && n2>=n3){
        printf(" \n1° %d\n2° %d\n3° %d ", n1,n2,n3);
    }else if(n1>=n3 && n2<=n3 && n2<=n1){
        printf(" \n1° %d\n2° %d\n3° %d ", n1,n3,n2);
    }else if(n2>=n1 && n1>=n3 && n2>=n3){
        printf(" \n1° %d\n2° %d\n3° %d ", n2,n1,n3);
    }else if(n2>=n3 && n1<=n2 && n3>=n1){
        printf(" \n1° %d\n2° %d\n3° %d ", n2,n3,n1);
    }else if(n3>=n1 && n3>=n2 && n2<=n1){
        printf(" \n1° %d\n2° %d\n3° %d ", n3,n1,n2);
    }else{
        printf(" \n1° %d\n2° %d\n3° %d ", n3,n2,n1);
    }

    return 0;
}