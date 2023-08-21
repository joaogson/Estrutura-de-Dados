#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void FormulaBhaskara(double a, double b, double c){
    double delta = (b*b)-(4*a*c);
    double raiz1 = (-b + sqrt(delta)) / (2 * a);
    double raiz2 = (-b - sqrt(delta)) / (2 * a);
    
    if(delta < 0){
        printf("Nao possui raizes reais");
    }
    else if(delta == 0){
        printf("raiz: %.1lf", raiz1);
    
    }
    else{
        printf("raiz 1: %.1lf\n", raiz1);
        printf("raiz 2: %.1lf\n", raiz2);

    }
    
   
}

int main(){

double num1;
double num2;
double num3;

printf("digite os valores de A, B e C da função: \n");
scanf("%lf%lf%lf", &num1, &num2, &num3);

FormulaBhaskara(num1, num2, num3);
return 0;
}