#include <stdio.h>
#include <stdlib.h>

main(){
int tamanho = 4;
int matriz1 [tamanho][tamanho], m1 = 0; 
int matriz2 [tamanho][tamanho], m2 = 0;
int matriz3 [tamanho][tamanho];

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
            matriz1[linha][coluna] = rand() % 200;

        }
    }

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
            printf("[%4d",matriz1[linha][coluna]);

        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
            matriz2[linha][coluna] = rand() % 400;

        }
    }

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
            printf("[%4d",matriz2[linha][coluna]);

        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
           if(matriz1[linha][coluna]>matriz2[linha][coluna]){
            matriz3[linha][coluna] = matriz1[linha][coluna];
            m1++;
           }
           else{
            matriz3[linha][coluna] = matriz2[linha][coluna];
            m2++;
           }

        }
    }

    for(int linha = 0; linha<tamanho; linha++){
        for(int coluna = 0; coluna<tamanho; coluna++){
            printf("[%4d",matriz3[linha][coluna]);

        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("Foram usados [%d] numeros da matriz 1 e [%d] numeros da matriz 2", m1, m2);

}