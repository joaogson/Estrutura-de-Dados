#include <stdio.h>
#include <stdlib.h>


float Media(int tam, float vetor[tam]){
    
    float soma=0;
    for(int i=0;i<tam; i++){
        soma += vetor[i];
    }
    return soma / tam;
}
void PrintarVetor(int tam, float vetor[tam]){
    printf("Vetor: ");
    for(int i=0; i<tam; i++){
        printf("[%.2f] ", vetor[i]);
    }
}
int main(){

    int tam = 5;
    float vetor[tam];

    for (int i = 0; i < tam; i++){
        vetor[i]= rand() % 10;
    }

    PrintarVetor(tam, vetor);
    printf("\n\nMedia: [%.2f]\n", Media(tam, vetor));

    
}