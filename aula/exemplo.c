#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

void menu() {
    printf("Digite:\n");
    printf("1 - Para ver contatos\n");
    printf("2 - Para adicionar contatos\n");
    printf("3 - Para excluir contatos\n");
    printf("4 - Para sair\n");
}

struct contatos {
    char nome[50];
    int telefone;
    char email[50];
    char endereco[50];
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
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1: // Ver contatos
            if (bloco.quantidade == 0) {
                printf("Você não possui nenhum contato ainda.\n");
            } else {
                printf("Contatos:\n");
                for (int i = 0; i < bloco.quantidade; i++) {
                    printf("Nome: %s\n", bloco.agenda[i].nome);
                    printf("Telefone: %d\n", bloco.agenda[i].telefone);
                    printf("Email: %s\n", bloco.agenda[i].email);
                    printf("Endereço: %s\n", bloco.agenda[i].endereco);
                    printf("\n");
                }
            }
            break;

        case 2: // Adicionar contatos
            if (bloco.quantidade >= MAX_CONTATOS) {
                printf("Agenda cheia. Não é possível adicionar mais contatos.\n");
            } else {
                printf("Quantos contatos você deseja adicionar? ");
                scanf("%d", &numcontato);

                if (numcontato + bloco.quantidade > MAX_CONTATOS) {
                    numcontato = MAX_CONTATOS - bloco.quantidade;
                    printf("Número de contatos ajustado para não exceder o limite.\n");
                }

                for (int i = 0; i < numcontato; i++) {
                    printf("Digite o nome do contato %d:\n", bloco.quantidade + 1 + i);
                    scanf("%s", bloco.agenda[bloco.quantidade + i].nome);

                    printf("Digite o telefone do contato %d:\n", bloco.quantidade + 1 + i);
                    scanf("%d", &bloco.agenda[bloco.quantidade + i].telefone);

                    printf("Digite o email do contato %d:\n", bloco.quantidade + 1 + i);
                    scanf("%s", bloco.agenda[bloco.quantidade + i].email);

                    printf("Digite o endereço do contato %d:\n", bloco.quantidade + 1 + i);
                    scanf("%s", bloco.agenda[bloco.quantidade + i].endereco);
                }

                bloco.quantidade += numcontato;
                printf("Contatos atualizados.\n");
            }
            break;

        case 3: // Excluir contatos
            // Excluir contatos (não implementado no código atual)
            break;

        case 4: // Sair
            printf("Saindo...\n");
            return 0;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 4);

    return 0;
}