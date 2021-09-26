#include <stdio.h>

int main (void){
/*Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário
a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela*/

    struct pessoa{
        char nome[30];
        char curso[20];
        int mat;
    };

    struct pessoa aluno[5];

    for(int i=0; i<5; i++){
        printf("----------------------------\n");
        printf("Digite o nome do aluno: ");
        scanf(" %s[^\n]", aluno[i].nome);
        printf("Digite o curso: ");
        scanf(" %s[^\n]", aluno[i].curso);
        printf("Digite a matricula: ");
        scanf(" %d", &aluno[i].mat);
        system("cls");
    }

    for(int a=0; a<5; a++){
      printf("----------------------------\n"); 
      printf("Aluno %d\n", a+1);
      printf("Nome: %s\n", aluno[a].nome);
      printf("Curso: %s\n", aluno[a].curso);
      printf("Matricula: %d\n", aluno[a].mat); 
    }

}