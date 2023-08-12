//vetor de 10 posições, alocar no vetor os 10 primeiros numeros impares

#include <stdio.h>

int main(){

int tamanho = 10;
int vetor[tamanho];

int cont = 0;
int numero;

do{
printf("Digite um numero: [%d]", cont);
scanf("%i", &numero);

if(numero % 2 == 1){
    vetor[cont] = numero;
    cont++;
}
}while(cont<tamanho);

for(int i = 0; i<tamanho; i++)
 printf("[%d]", vetor[i]);
printf("\n");

return 0;
}

