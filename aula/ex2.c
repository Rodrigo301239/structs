#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 10


struct aluno
{
    char nome [50];
    int nummatricula;
    char curso [50];
};


int main (){
struct aluno dados [MAX_ALUNOS];
int quantidade;

printf ("sao quantos alunos?\n");
scanf("%d",&quantidade);

for (int i = 0; i < quantidade; i++)
{
printf ("\nqual e seu nome?\n");
scanf ("%s",dados[i].nome);
printf ("qual e seu numero de matricula?\n");
scanf ("%d",&dados[i].nummatricula);
printf ("qual e seu curso?\n");
scanf ("%s",dados[i].curso);
printf("\nproximo aluno: \n");
}
printf ("\n| Dados |\n");

for (int i = 0; i < quantidade; i++)
{
    printf ("aluno %s\nnumero de matricula: %d\ncurso: %s\n\n",dados[i].nome,dados[i].nummatricula,dados[i].curso);
}

    return 0;
}