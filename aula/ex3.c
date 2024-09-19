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



              NOVO                                           NOVO                                NOVO                                      NOVO

#include <stdio.h>
#include <string.h>
#define MAX_CONTATOS 100

void menu (){
    printf("digite\n1 - para ver contatos\n2- para adicionar contatos\n3 - excluir contatos\n4 - para ver lixeira de contatos\n5 - para sair\n");
}




struct contatos

{
    char nomes [50];
    int telefones;
    char email [50];
    char endereco [50];
    int excluido;

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
    char nomecontato [50];

     menu ();
do
{
   
    scanf("%d",&opcao);

    
    
    switch (opcao)
    {
    case 1:

        if (bloco.quantidade == 0)
        {
        printf("\nvoce nao possui nenhum contatos ainda\n\n");
        menu ();
        }
        else {
            printf ("|| CONTATOS ||");
            for (int i = 0; i < bloco.quantidade; i++)
            {
            if (bloco.agenda[i].excluido == 0){
            printf ("\n\nnome: %s\ntelefone: %d\nemail: %s \nendereco %s\n",bloco.agenda[i].nomes,bloco.agenda[i].telefones, bloco.agenda[i].email,bloco.agenda[i].endereco);
            
            }
            }

            
        }
            menu ();
            break;
    case 2:
        printf ("irao ser quantos contatos?\n");
        scanf ("%d",&numcontato);

        for (int i = 0; i < numcontato; i++)
        {
            printf("qual o nome do contato?\n");
            scanf ("%s",bloco.agenda[bloco.quantidade + i].nomes);
            printf("\nqual o telefone do contato?\n");
            scanf("%d",&bloco.agenda[bloco.quantidade + i].telefones);
            printf("\nqual o email do contato?\n");
            scanf("%s",bloco.agenda[bloco.quantidade + i].email);
            printf("\nqual o endereço?\n");
            scanf("%d",&bloco.agenda[bloco.quantidade + i].endereco);
            
        }
        bloco.quantidade += numcontato;
        printf("\ncontatos atualizados\n");
        menu ();
        break;
    case 3:
        if (bloco.quantidade == 0){
            printf ("voce ainda não possui contatos para excluir\n\n");
            menu ();
            
        }
        else {
            printf ("qual o nome do contato voce deseja excluir?\n");
            scanf("%s",nomecontato);
    for (int i = 0; i < bloco.quantidade; i++)  { 
        if (strcmp (nomecontato,bloco.agenda[i].nomes) == 0 && !bloco.agenda[i].excluido){
            bloco.agenda[i].excluido = 1;
            printf ("contato excluido\n");
            
            
        }
    }
    bloco.quantidade --;
    menu ();
        }
    break;
        case 4:
        for (int i=0;i < bloco.quantidade; i++){
        if (bloco.agenda[i].excluido == 0){
                printf ("voce nao tem nada na lixeira\n");
        }
        
          menu ();      
        }    
    
        
        for (int i = 0;i < bloco.quantidade;i++){
            if (bloco.agenda[i].excluido == 1){
                printf ("\n\nnome: %s\ntelefone: %d\nemail: %s \nendereco %s\n",bloco.agenda[i].nomes,bloco.agenda[i].telefones, bloco.agenda[i].email,bloco.agenda[i].endereco);
            }
            }
            
        }
}while (opcao != 5);


    return 0;
}    
   
        
        


