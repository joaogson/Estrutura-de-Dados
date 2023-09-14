#include <stdio.h>
#include <stdlib.h>

char Conceito(float media){

    
    if(media <=4.9)
        return 'D';
    if(media<=6.9)
        return 'C';
    if(media <=8.9)
        return 'B';
    if(media<=10)
        return 'A';
    return 'E';
}


int main(){
    
    float media;
    printf("Informe a média: ");
    scanf("%f", &media);

    printf("O conceito foi: %c", Conceito(media));
    return 0;
}