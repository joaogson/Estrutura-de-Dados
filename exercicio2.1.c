/*Elabore uma função que receba duas strings como parâmetros everifique se a segunda string ocorre dentro da primeira. Use
aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ContarCaracter(char *p1){

    int tam = 0;
    do{
    tam++;
    }while (p1[tam] != '\0');

    return tam - 1;

}

char ContemString(char *char1, char *char2){
    
    int tamanho1, tamanho2, count, c;

    tamanho1 = ContarCaracter(char1);
    tamanho2 = ContarCaracter(char2);
    count=0;
    for(int i=0; i<tamanho1; i++){
        c = i;
    printf("\ni=%d\n\n", i);
        if(char2[0]==*(char1 + i)){
                count=0;
                printf("\na primeira letra aparece na string\n");
            for(int j=0;j<tamanho2; j++){
                printf("\nj=%d",j);
                if(*(char2 + j)== *(char1 + c)){
                    printf("\nc=%d", c);
                    printf("\nA letra e igual");
                c++;
                count++;
                printf("\ncount=%d\n", count);
                if(count==tamanho2){
                printf("[%d]", count);
                return 1;
            }
                }
                else{
                    printf("\nc=%d", c); 
                    printf("\ndA letra nao e igual");
                    c++;
                  count=0;
                  printf("\ncount=%d\n", count);
                }
            }
        } 
    }
        
        if(count != tamanho2){
           printf("[%d]", count);
           return 0;
        }

}


int main(){

char str1[50], str2[50];

printf("Preencha a String\n");
fgets(str1, 50, stdin);
fflush(stdin);
printf("Preencha a Sub-String\n");
fgets(str2, 50, stdin);
fflush(stdin);



if(ContemString(str1, str2)){
    printf("A string esta contida na outra\n");
    printf("Em %s contem %s", str1, str2);
}
else{
    printf("A string nao esta contida\n");
    printf("Em %s nao contem %s", str1, str2);
}


}