#include <stdio.h>


int primo(int numero){
    if(numero <= 1){
        return 0;
    }

    for(int i = 2; i<numero; i++)
        if(numero % i == 0)
            return 0;
        
    return 1;
    
    
}

main(){
    float num;
    printf("Informe um numero");
    scanf("%f", &num);

    if(primo(num)){
        printf("eh primo");
    }
    else{
        printf("nao eh primo");
    }


}