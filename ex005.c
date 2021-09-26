#include <stdio.h>

int main (void){
/*Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
Para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.*/

    struct Vetor{
        float x;
        float y;
        float z;
    } vet1[3], vet2[3];

    float somap1[3];
    float somap2[3];
    float somap3[3];
    float somat[3];


    for(int i=0;i<3;i++){
        printf("Digite o primeiro numero decimal do vetor1: ");
        scanf(" %f", &vet1[i].x);
        printf("Digite o segundo numero decimal do vetor1: ");
        scanf("%.2f", &vet1[i].y);
        printf("Digite o terceiro numero decimal do vetor1: ");
        scanf("%.2f", &vet1[i].z);
        printf("Digite o primeiro numero decimal do vetor2: ");
        scanf(" %f", &vet2[i].x);
        printf("Digite o segundo numero decimal do vetor2: ");
        scanf("%.2f", &vet2[i].y);
        printf("Digite o terceiro numero decimal do vetor2: ");
        scanf("%.2f", &vet2[i].z);

        somap1[i] = vet1[i].x + vet2[i].x;
        somap2[i] = vet1[i].y + vet2[i].y;
        somap3[i] = vet1[i].z + vet2[i].z;

        somat[i] = somap1[i] + somap2[i] + somap3[i]; 
    }

    for(int i=0;i<3;i++){
        printf("A soma do %d primeiro numero foi: %2.f\n", i,somap1[i]);
        printf("A soma do %d segundo numero foi: %2.f\n", i,somap2[i]);
        printf("A soma do %d terceiro numero foi: %2.f\n", i,somap3[i]);
        printf("A soma %d de todos os numeros foi: %2.f\n", i,somat[i]);
    }

}