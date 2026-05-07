#include "media.h"
#include <stdio.h>
float calculo(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

void result(float media){
    if(media>=7){
        printf("\nAprovado - media: %.2f", media);
    }else{
        printf("\nReprovado - media: %.2f", media);
        
    }

}

