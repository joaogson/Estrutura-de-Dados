/*Considere uma estrutura (struct) chamada Aluno que possui os
seguintes campos:
• nome (uma string com no máximo 50 caracteres).
• matrícula (um número inteiro).
• nota (um número decimal).
Declare um vetor de estruturas Aluno para armazenar informações de alunos. O tamanho do vetor pode ser definido como você
preferir (por exemplo, 5 alunos).
Escreva um programa que permita ao usuário inserir informações
para cada aluno no vetor de estruturas. Use ponteiros para
percorrer e preencher as informações.
Em seguida, crie uma função chamada encontraMelhorAluno que
recebe o vetor de estruturas de alunos e seu tamanho como
argumentos e retorna um ponteiro para o aluno com a nota mais
alta. Crie outra função chamada encontraPiorAluno que também
recebe o vetor de alunos, mas retorna um ponteiro para o aluno
com a nota mais baixa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

typedef struct Aluno aluno;


aluno* EncontrePiorAluno(aluno *alunosInfo, int tamanho){
    int count =0;
    int piorNota = alunosInfo[0].nota;
    printf("\n\nBuscando pior aluno");
    for(int i=0; i<tamanho; i++){
        if(alunosInfo[i].nota < piorNota){
            
            piorNota = alunosInfo[i].nota;
            count=i;
        }
    }
    aluno piorAluno = alunosInfo[count];
    
    printf("\n\nNome: %sMatriclua: %d\nNotas: %.1f", piorAluno.nome, piorAluno.matricula, piorAluno.nota);
   //return alunosInfo[count];

}

aluno* EncontreMelhorAluno(aluno *alunosInfo, int tamanho){
    int count =0;
    int melhorNota = alunosInfo[0].nota;
    printf("\n\nBuscando melhor aluno");
    for(int i=0; i<tamanho; i++){
        if(alunosInfo[i].nota > melhorNota){
            melhorNota = alunosInfo[i].nota;
            count=i;
        }
    }
    aluno melhorAluno = alunosInfo[count];
    
    printf("\n\nNome: %sMatriclua: %d\nNotas: %.1f", melhorAluno.nome, melhorAluno.matricula, melhorAluno.nota);
   //return alunosInfo[count];

}




void CadastrarAlunos(int tamanho, aluno *a){

    printf("Preencha os dados com Nome, matricula e nota\n");
    for(int i=0; i<tamanho; i++){
        fgets((*(a+i)).nome, 50, stdin);
        scanf("%d", &(*(a+i)).matricula);
        scanf("%f", &(*(a+i)).nota);
        fflush(stdin);
    }


}

int main(){

    int tamanho =3;
    aluno Aluno[tamanho];

    CadastrarAlunos(tamanho, Aluno);

    for(int i=0; i<tamanho; i++){
        printf("nome: %smatricula: %d\nnota: %.1f\n", (*(Aluno+i)).nome, (*(Aluno+i)).matricula, (*(Aluno+i)).nota);
    }

    aluno *melhoraluno = EncontreMelhorAluno(Aluno, tamanho);
    aluno *pioraluno = EncontrePiorAluno(Aluno, tamanho);
    
    printf("Dados melhor aluno\nNome: %s\nMatricula:%d\nNota: %.1f", melhoraluno->nome, melhoraluno->matricula, melhoraluno->nota);
    printf("Dados melhor aluno\nNome: %s\nMatricula:%d\nNota: %.1f", pioraluno->nome, pioraluno->matricula, pioraluno->nota);
}