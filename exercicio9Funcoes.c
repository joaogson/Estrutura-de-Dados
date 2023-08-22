#include <stdio.h>
#include <stdlib.h>


void PrintarMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++ ){
            printf("[%2d] ", matriz[i][j]);
        }
        printf("\n");
    }
}

void PreencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    
    for(int i =0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            matriz[i][j]= rand() % 100;
        }
    }
}

int MaiorValor(int linhas, int colunas, int matriz[linhas][colunas]){

    int maior = matriz[0][0];

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            if(matriz[i][j]> maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main(){
    int linhas=6, colunas=6;
    int matriz[linhas][colunas];

    PreencherMatriz(linhas, colunas, matriz);
    PrintarMatriz(linhas, colunas, matriz);
    printf("O maior valor: %d", MaiorValor(linhas, colunas, matriz));

}