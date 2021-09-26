#include <stdio.h>

int cadaluno();

int media();

int mediaM();

int mediam();

int Mnota();


struct pessoa{
    char nome[30];
    int mat;
    float n1;
    float n2;
    float n3;
};

struct pessoa aluno[5];

int main (void){
/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. [FEITO]
(b) Encontre o aluno com maior nota da primeira prova. [FEITO]
(c) Encontre o aluno com maior media geral. [FEITO]
(d) Encontre o aluno com menor media geral. [FEITO]
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovacao. [FEITO] */

    int op = 0;

    while (op!=6){
        printf("--------Menu--------\n");
        printf("1) Cadastro de aluno\n");
        printf("2) Media\n");
        printf("3) Maior Media\n");
        printf("4) Menor Media\n");
        printf("5) Maior Nota PV1\n");
        printf("6) Sair\n");
        printf("--------------------\n");
        scanf("%d", &op);
        system("cls");
        
        switch (op){
            case 1:
                cadaluno();
            break;
            case 2:
                media();
            break;
            case 3:
                mediaM();
            break;
            case 4:
                mediam();
            break;
            case 5:
                Mnota();
            break;
            default:
            break;
        }
    }

}

cadaluno(){

    for(int i=0;i<5;i++){
        printf("Aluno-%d\n", i+1);
        printf("Nome: ");
        scanf(" %s[^\n]", &aluno[i].nome);
        printf("Matricula: ");
        scanf("%d", &aluno[i].mat);
        printf("Nota pv1: ");
        scanf("%f", &aluno[i].n1);
        printf("Nota pv2: ");
        scanf(" %f", &aluno[i].n2);
        printf("Nota pv3: ");
        scanf(" %f", &aluno[i].n3);
        system("cls");
    }
}

media(){
    float M=0;

    for(int i=0;i<5;i++){
        printf("------------\n");
        printf("Aluno: %s\n", aluno[i].nome);
        M = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;
        printf("Media: %.2f\n", M);

        if(M<6){
            printf("REPROVADO\n");
        }else{
            printf("APROVADO\n");
        }
        
    }
}

mediaM(){
    float media=0;
    float maior=0;
    int a=0;
    int ialunoM=0;

    for(int j=0;j<5;j++){
        media = (aluno[j].n1 + aluno[j].n2 + aluno[j].n3) / 3;
        
        if(a==0){
            maior = media;
            a = 1;
        }else if(media>maior){
            maior = media;
            ialunoM++;
        }
    }

    printf("Aluno maior media: %s\n", aluno[ialunoM].nome);
    printf("Maior media: %.2f\n",maior);

}

mediam(){
    float media=0;
    float menor=0;
    int a=0;
    int ialunom=0;

    for(int i=0;i<5;i++){
        media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3) / 3;

        if(a==0){
            menor = media;
            a = 1;
        }else if(media<menor){
            menor = media;
            ialunom++;
        }
    }

    printf("Aluno menor media: %s\n", aluno[ialunom].nome);
    printf("Menor media: %.2f\n", menor);
}

Mnota(){
    float nota = 0;
    float Mnota = 0;
    int a = 0;
    int ia = 0;

    for(int i=0;i<5;i++){
        nota = aluno[i].n1;

        if(a==0){
            Mnota = nota;
            a = 1;
        }else if(nota>Mnota){
            Mnota = nota;
            ia++;
        }
    }

    printf("Aluno: %s\n", aluno[ia].nome);
    printf("Maior nota prova1: %.2f\n", Mnota);

}