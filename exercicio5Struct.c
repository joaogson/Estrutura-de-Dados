/*Usando a estrutura Retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não
dentro do retângulo.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct quadrilatero {
    float x;
    float y;
    };

void Analise_Ponto (struct quadrilatero ponto1Retangulo, struct quadrilatero ponto2Retangulo, struct quadrilatero pontoAnalisado){

    if(ponto1Retangulo.x <= pontoAnalisado.x && ponto2Retangulo.x >= pontoAnalisado.x){
        if(ponto1Retangulo.y >= pontoAnalisado.y &&ponto2Retangulo.y <= pontoAnalisado.y) {
            printf("O ponto esta dentro do quadrilatero\n");
        }
        else{
            printf("O ponto nao esta dentro do quadrilatero\n");
        }
    }    
}

int main(){

    float area;
    
    struct quadrilatero ponto;
    struct quadrilatero ponto1_retangulo;
    struct quadrilatero ponto2_retangulo;

    printf("Informe o ponto X e Y do vertice superior esquerdo: \n");
    scanf("%f%f", &ponto1_retangulo.x, &ponto1_retangulo.y);
    printf("Informe o ponto X e Y do vertice inferior direito: \n");
    scanf("%f%f", &ponto2_retangulo.x, &ponto2_retangulo.y);
    printf("Informe um ponto (X, Y) a ser analisado: ");
    scanf("%f%f", &ponto.x, &ponto.y);

    Analise_Ponto(ponto1_retangulo, ponto2_retangulo, ponto);

    area = fabs((ponto2_retangulo.x - ponto1_retangulo.x) * (ponto2_retangulo.y - ponto1_retangulo.y));

    printf("A Area do quadrilatero é: %.2f\n", area);

}
