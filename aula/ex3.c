#include <stdio.h>
#include <string.h>
#define MAX_CONTATOS 100

void menu (){
    printf("digite\n1 - para ver contatos\n2- para adicionar contatos\n3 - excluir contats\n4 - para sair");
}




struct contatos

{
    char nomes [50];
    int telefones;
    char email [50];
    char endereco [50];

}dados;




struct blocos
{
    struct contatos agenda [MAX_CONTATOS];
    int quantidade;
}bloco [20];




int main (){
    struct blocos bloco;
    bloco.quantidade = 0;
    int opcao,numcontato;

    
do
{
    menu ();
    scanf("%d",&opcao);

    
    
    switch (opcao)
    {
    case 1:

        if (bloco.quantidade == 0)
        {
        printf("\nvoce nao possui nenhum contatos ainda\n");
        }
        else {
            for (int i = 0; i < 100; i++)
            {
            printf ("nome %s\ntelefone %d\nemail\nendereco %s",bloco.agenda[i].nomes,bloco.agenda[i].telefones);
            }

            
        }
            break;
    case 2:
        printf ("irao ser quantos contatos?\n");
        scanf ("%d",numcontato);

        for (int i = 0; i < numcontato; i++)
        {
            printf("qual o nome do contato?\n");
            scanf ("%d",&bloco.agenda[bloco.quantidade + i].nomes);
            printf("\nqual o telefone do contato?\n");
            scanf("%d",&bloco.agenda[bloco.quantidade + i].telefones);
            printf("\nqual o email do contato?\n");
            scanf("%s",bloco.agenda[bloco.quantidade + i].email);
            printf("\nqual o endereço?\n");
            scanf("%d",bloco.agenda[bloco.quantidade + i].endereco);
            
        }
        printf("\ncontatos atualizados\n");
        menu ();
        break;
        
        }
}while (opcao != 4);


    return 0;
}
   
        
        


