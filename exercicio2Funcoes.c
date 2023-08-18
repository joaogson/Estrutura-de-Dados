#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Media(nota1, nota2, nota3, opcao){
    float media;

    if(opcao == 1){
        media = (nota1 + nota2 + nota3) / 3;
    }
    else if (opcao == 2)
    {
        media = (nota1*5 + nota2*3 + nota3*2)/(5+3+2);
    }
    
    return media;
}

int main(){

    float Nota1; 
    float Nota2;
    float Nota3;
    int Letra;

    printf("Digite a primeira nota: ");
    scanf("%f", &Nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &Nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &Nota3);

    printf("Informe a media\nA- Aritimetica\nP- Ponderada\n H- Harmonica\n");
    scanf("%d", &Letra);
 
    printf("a media e: %f", Media(Nota1, Nota2, Nota3, Letra));

    return 0;
}