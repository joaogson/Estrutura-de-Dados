#include <stdio.h>

main(){
    int tamanho = 5;
    int matriz[tamanho][tamanho];

    for(int linha = 0;linha<tamanho; linha++){
        for(int coluna = 0;coluna<tamanho; coluna++){
            if(linha==coluna){
                matriz[linha][coluna] = 1;
            }
            else{
                matriz[linha][coluna]= 0;
            }
        }
    }

    for(int linha = 0;linha<tamanho; linha++){
        for(int coluna = 0;coluna<tamanho; coluna++){

            printf("[%1d]",matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
}