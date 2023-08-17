#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Volume (float raio){
    float Volume = 4.0/3.0 * M_PI * pow(raio, 3); 

    return Volume;
}
int main(){
    float Raio;
    printf("Digite o valor do circulo: ");
    scanf("%f", &Raio);
    float volume = Volume(Raio);
    printf("%2f", volume);

    return 0;
}