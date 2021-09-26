#include <stdio.h>

int main (void){
/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: 
Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. 
Considere uma turma de ate 10 alunos. Apos ler todos os dados digitados, e depois de armazena-los
em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias
finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
Media ponderada: n1 x 1 + n2 x 2 / 1 + 2 */

    struct aluno{
        char nome[30];
        int mat;
        int cod;
        float n1;
        float n2;
    };

    struct aluno aluno[10];

    float media[10];

    for(int i=0;i<10;i++){
        printf("Aluno-%d\n",i+1);
        printf("Nome: ");
        scanf(" %s[^\n]", &aluno[i].nome);
        printf("Matricula: ");
        scanf("%d", &aluno[i].mat);
        printf("Codigo da disciplina: ");
        scanf("%d",&aluno[i].cod);
        printf("Nota 1: ");
        scanf("%f",&aluno[i].n1);
        printf("Nota 2: ");
        scanf("%f",&aluno[i].n2);
        media[i] = (aluno[i].n1 * 1 + aluno[i].n2 * 2) / 3;
        system("cls");
    }

    for(int i=0;i<10;i++){
        printf("-------------------------\n");
        printf("Aluno-%d\n",i+1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].mat);
        printf("Codigo da disciplina: %d\n", aluno[i].cod);
        printf("Nota 1: %.2f\n", aluno[i].n1);
        printf("Nota 2: %.2f\n", aluno[i].n2);
        printf("Media final: %.2f\n", media[i]);
    }

}