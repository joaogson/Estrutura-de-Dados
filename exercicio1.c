#include <stdio.h>
#include <locale.h>

int main(){

     setlocale(LC_ALL,"");

    int vetor[12], X, Y;
    
    printf("Informe os 12 valores do vetor\n");
    
    for(int i = 0;i<12; i++){
        printf("[%d] : ", i);
        scanf("%d", &vetor[i]);
    }


    printf("Escolha 2 numero menores que 12\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    if(X>12 || Y>12){
        printf("ERROR");
    }

    printf("\nSOMA: %d", vetor[X] + vetor[Y]);


}