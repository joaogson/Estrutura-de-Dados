#include <stdio.h>
#include <math.h>

int main(){
    struct posicao{
        double x;
        double y;
    };
    
    struct posicao pontos;
    double distancia;

    printf("Informe as coordenadas: ");
    scanf("%lf%lf", &pontos.x, &pontos.y);

    distancia = sqrt((pow(pontos.x,2))+(pow(pontos.y,2)));

    printf("distancia: %.2lf", distancia);
    return 0;
}