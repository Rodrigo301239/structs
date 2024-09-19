#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CONTATOS 100

void limpar_tela() {
    system("cls");
}

void menu() {
    printf("Digite:\n1 - Para ver contatos\n2 - Para adicionar contatos\n3 - Excluir contatos\n4 - Para ver lixeira de contatos\n5 - Para sair\n");
}

struct contatos {
    char nomes[50];
    int telefones;
    char email[50];
    char endereco[50];
    int excluido;
};

struct blocos {
    struct contatos agenda[MAX_CONTATOS];
    int quantidade;
};

int main() {
    struct blocos bloco;
    bloco.quantidade = 0;
    int opcao, numcontato;

    do {
        menu();
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                if (bloco.quantidade == 0) {
                    printf("\nVoce nao possui nenhum contato ainda.\n\n");
                } else {
                    printf("|| CONTATOS ||\n");
                    for (int i = 0; i < bloco.quantidade; i++) {
                        if (bloco.agenda[i].excluido == 0) {
                            printf("contato %d",i+1);
                            printf("\n\nNome: %s\nTelefone: %d\nEmail: %s\nEndereço: %s\n\n",
                                   bloco.agenda[i].nomes,
                                   bloco.agenda[i].telefones,
                                   bloco.agenda[i].email,
                                   bloco.agenda[i].endereco);
                        }
                    }
                }
                break;

            case 2:
                printf("Quantos contatos deseja adicionar?\n");
                scanf("%d", &numcontato);
                for (int i = 0; i < numcontato; i++) {
                    printf("Qual o nome do contato?\n");
                    scanf("%s", bloco.agenda[bloco.quantidade + i].nomes);
                    printf("Qual o telefone do contato?\n");
                    scanf("%d", &bloco.agenda[bloco.quantidade + i].telefones);
                    printf("Qual o email do contato?\n");
                    scanf("%s", bloco.agenda[bloco.quantidade + i].email);
                    printf("Qual o endereço?\n");
                    scanf("%s", bloco.agenda[bloco.quantidade + i].endereco); 
                    bloco.agenda[bloco.quantidade + i].excluido = 0; 
                }
                bloco.quantidade += numcontato;
                printf("\nContatos atualizados.\n");
                break;

            case 3:
                if (bloco.quantidade == 0) {
                    printf("Voce ainda nao possui contatos para excluir.\n");
                } else {
                    printf("Qual o numero do contato que deseja excluir?\n");
                    int nomecontato[50];
                    scanf("%d", nomecontato);
                    int encontrado = 0;
                    for (int i = 0; i < bloco.quantidade; i++) {
                        if (nomecontato [i] == i+1) {
                            bloco.agenda[i].excluido = 1;
                            encontrado = 1;
                            printf("Contato excluído.\n");
                            break;
                        }
                    }
                    if (!encontrado) {
                        printf("Contato não encontrado.\n");
                    }
                }
                break;

            case 4: {
                int lixeira_vazia = 1; 
                for (int i = 0; i < bloco.quantidade; i++) {
                    if (bloco.agenda[i].excluido == 1) {
                        lixeira_vazia = 0; 
                        break;
                    }
                }
                if (lixeira_vazia) {
                    printf("Você não tem nada na lixeira.\n");
                } else {
                    printf("|| LIXEIRA ||\n");
                    for (int i = 0; i < bloco.quantidade; i++) {
                        if (bloco.agenda[i].excluido == 1) {
                            printf("\n\nNome: %s\nTelefone: %d\nEmail: %s\nEndereço: %s\n",
                                   bloco.agenda[i].nomes,
                                   bloco.agenda[i].telefones,
                                   bloco.agenda[i].email,
                                   bloco.agenda[i].endereco);
                        }
                    }
                }
                break;
            }

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
