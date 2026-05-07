#include "media.h"

float calculo(float n1, float n2, float n3, float media){
    media=(n1+n2+n3)/3;

    if(media>=7){
        void result(){
            printf("\nAprovado");
        }
    }else{
        void result(){
               printf("\nReprovcado");
        }
    }
    return ;
}

