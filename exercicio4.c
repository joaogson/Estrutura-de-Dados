#include <stdio.h>
#include <stdlib.h>

int main(){
int linhas = 10;
int colunas = 10;
int matriz[linhas][colunas];

int MaiorNumero, LinhaMaiorNumero, ColunaMaiorNumero;

for(int linha = 0; linha<linhas; linha++){
    for(int coluna = 0; coluna<colunas; coluna++){
        matriz[linha][coluna] = rand() % 100;
    }
}

for(int i = 0; i<linhas; i++){
    for(int j = 0; j<colunas; j++){
        printf("[%5d]", matriz[i][j]);
    }
    printf("\n");
}

MaiorNumero = matriz[0][0];



for(int linha = 0; linha<linhas; linha++){
    for(int coluna = 0; coluna<colunas; coluna++){
        if(matriz[linha][coluna]>MaiorNumero){
            MaiorNumero = matriz[linha][coluna];
            LinhaMaiorNumero = linha;
            ColunaMaiorNumero = coluna;
        }
    }
}


printf("O maior valor da matriz esta na posição [%d],[%d]",LinhaMaiorNumero, ColunaMaiorNumero);


}