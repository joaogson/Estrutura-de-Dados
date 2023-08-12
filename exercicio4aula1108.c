#include <stdio.h>

main(){
    int tamanho = 6;
    int matriz[tamanho][tamanho], cont;


    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0;coluna<tamanho; coluna++){
            matriz[linha][coluna] = rand() % 20;
        }
    }

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0;coluna<tamanho; coluna++){
            printf("[%2d]", matriz[linha][coluna]);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("\n");

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0;coluna<tamanho; coluna++){
            if(matriz[linha][coluna]>10){
                printf("[%2d]", matriz[linha][coluna]);
                cont++;
            }
            else{
                printf("[  ]");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("A matriz possui [%2d] valores maiores que 10", cont);
    printf("\n");
    printf("\n");

    return 0;
    
}
