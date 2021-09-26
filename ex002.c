#include <stdio.h>


int main (void){
/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura*/

    struct pessoa{
        char nome[50];
        int idade;
        char endere[100];
    }human;

    printf("Digite o seu nome: ");
    gets(human.nome);
    printf("Digite seu endereco: ");
    gets(human.endere);
    printf("Qual sua idade: ");
    scanf("%d", &human.idade);

    printf("---------------------\n");
    printf("Nome: %s\n", human.nome);
    printf("Idade: %d\n", human.idade);
    printf("Endereco: %s\n", human.endere);
    printf("---------------------");
    
}