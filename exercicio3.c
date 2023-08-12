//vetor de 16 posições, trocar os 8 primeiros numeros do vetor pelos 8 ultimos.

int main(){

    int tamanho = 16;
    int vetor[tamanho];


    for(int i = 0;i<tamanho;i++){
        vetor[i]=i;
        printf("[%d]", vetor[i]);
    }
    
    for(int i = 0;i<tamanho/2;i++){
        int aux = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = aux;
    }

    printf("\nvetor invertido\n");
    for(int i = 0;i< tamanho;i++){
        printf("[%d]", vetor[i]);
    }
}