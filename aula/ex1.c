#include <stdio.h>
#include <string.h>

struct informacoes
{
    char nome [50];
    int idade;
    char endereco [50];
}dados;

int main (){

printf ("qual e seu nome?\n");
scanf ("%s",&dados.nome);
printf ("qual e sua idade?\n");
scanf("%d",&dados.idade);
printf ("seu nome e %s e voce tem %d anos",dados.nome,dados.idade);



    return 0;
}