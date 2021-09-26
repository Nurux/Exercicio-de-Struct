#include <stdio.h>


int main (void){
/*Escreva um trecho de codigo para fazer a criaçao dos novos tipos de dados conforme solicitado abaixo:
• Horario: composto de hora, minutos e segundos.
• Data: composto de dia, mes e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.*/

struct horario{
    int hora;
    int minutos;
    int segundos;
};

struct data{
   int dia;
   int mes;
   int ano; 
};

struct compromisso{
    data;
    horario;
    char text[];
};

}