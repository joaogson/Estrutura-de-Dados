#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct quadrilatero {
    float x;
    float y;
    };


int main(){

    float area;

    struct quadrilatero ponto1_retangulo;
    struct quadrilatero ponto2_retangulo;

    printf("Informe o ponto X e Y do vertice superior esquerdo: \n");
    scanf("%f%f", &ponto1_retangulo.x, &ponto1_retangulo.y);
    printf("Informe o ponto X e Y do vertice inferior direito: \n");
    scanf("%f%f", &ponto2_retangulo.x, &ponto2_retangulo.y);

    area = fabs((ponto2_retangulo.x - ponto1_retangulo.x) * (ponto2_retangulo.y - ponto1_retangulo.y));

    printf("A Area do quadrilatero é: %.2f", area);

}