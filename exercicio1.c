#include <stdio.h>
#include <stdlib.h>


int ContarCaracter(char *p1){

    int count = 0;
    do{
    count++;
    }while (p1[count] != '\0');

    printf("A string possui [%d] caracteres", count -1);

}

void EscreverString(){

    char str[50];;

    printf("escreva algo: \n");
    fgets(str, 50, stdin);
    fflush(stdin);

    ContarCaracter(str);   

}

int main(){

    int opc, i = 0;

    EscreverString();

    while(i>=0){
        printf("\n1 - Continuar\n2-Sair\n");
        scanf("%i", &opc);
        if(opc==1){
            getchar();
            system("cls");
            EscreverString();
        }
        else{
            return 0;
        }
    }
}