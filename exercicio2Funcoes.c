#include <stdio.h>
#include <stdlib.h>

float Media(float nota_1, float nota_2, float nota_3, char opc){
    float peso1=5, peso2=3, peso3=2, media=0;
    if(opc == 'a'){
        media = (nota_1 + nota_2 + nota_3) / 3;
    }
    else if(opc == 'p'){
        media = (nota_1*peso1+ nota_2*peso2 + nota_3*peso3) / (peso1 + peso2 + peso3);
    }
    else if(opc== 'h'){
        media = (3 / (1 / nota_1 + 1 / nota_2 + 1 / nota_3));
    }
    return media;
}

int main(){
    float nota1;
    float nota2;    
    float nota3;
    float media;
    char opcao;
    int sair;
    
    do{
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe o tipo de media: \nA - Aritimetica\nP - Ponderada\n H - Harmonica\n ");
    scanf("%s", &opcao);

    media = Media(nota1, nota2, nota3, opcao);

    printf("A media é: %2.1f\n\n", media);

    printf("continuar? 1-continuar 0- sair:\n ");
    scanf("%i", &sair);
}
while(sair > 0);

    return 0;
}

