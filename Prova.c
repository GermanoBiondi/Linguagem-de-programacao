#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "medicos.txt"
#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50

struct contato {
    int codigo;
    char nome[MAX_NAME_LENGTH];
    char telefone[14];
    char celular[14];
    char sexo[10];
    int e;
};

FILE *arq;

// Function prototypes
int menu();
int novoContato();
int pesquisarContato();
int alterarContato();
int exclusaoContato();
int pesquisarNumero();
int relatorioOrdenadoNome();
int ordenandoPorNumero(struct contato vetor[], int n);
int buscaCelular(struct contato vetor[], int n, const char *celular);
int capturaCelular();
int clearScreen();

int main() {
    return menu();
}

int clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    return 0;
}

int menu() {
    char opc;
    do {
        clearScreen();
        printf("\n 1 - Novo Contato");
        printf("\n 2 - Pesquisar Contato");
        printf("\n 3 - Alterar Contato");
        printf("\n 4 - Exclusao Contato");
        printf("\n 5 - Pesquisa Numero Celular");
        printf("\n 6 - Relatorio de Contas Ordenado por Nome");
        printf("\n 9 - Sair ");
        printf("\n Opcao: ");
        scanf(" %c", &opc);

        switch (opc) {
            case '1':
                novoContato();
                break;
            case '2':
                pesquisarContato();
                break;
            case '3':
                alterarContato();
                break;
            case '4':
                exclusaoContato();
                break;
            case '5':
                pesquisarNumero();
                break;
            case '6':
                relatorioOrdenadoNome();
                break;
            case '9':
                printf("\n\nSaindo...\n");
                break;
            default:
                printf("\n Opcao %c invalida", opc);
                getchar(); // Wait for a character to continue
                break;
        }

    } while (opc != '9');

    return opc;
}

int novoContato() {
    char op;
    struct contato novoContato;

    if ((arq = fopen(FILENAME, "ab")) == NULL) {
        printf("\n Erro ao abrir o arquivo.");
        exit(1);
    }

    do {
        clearScreen();
        printf("\n Criar Novo Contato\n");

        printf("\n Codigo: ");
        scanf("%d", &novoContato.codigo);
        printf("\n Nome: ");
        scanf(" %49[^\n]", novoContato.nome);
        printf("\n Telefone: ");
        scanf(" %13[^\n]", novoContato.telefone);
        printf("\n Celular: ");
        scanf(" %13[^\n]", novoContato.celular);
        printf("\n Sexo: ");
        scanf(" %9[^\n]", novoContato.sexo);

        novoContato.e = 0;
        fwrite(&novoContato, sizeof(novoContato), 1, arq);

        printf("\n Deseja inserir outro registro (S/N): ");
        scanf(" %c", &op);

    } while ((op == 'S') || (op == 's'));

    fclose(arq);
    return 0;
}

int pesquisarContato() {
    char textopesquisa[MAX_NAME_LENGTH];
    printf("\nInforme o nome do contato para pesquisa: ");
    scanf(" %49[^\n]", textopesquisa);

    if ((arq = fopen(FILENAME, "rb")) == NULL) {
        printf("\nErro ao abrir o arquivo.");
        return 1;
    }

    fseek(arq, 0, SEEK_END);
    long tamanho_arquivo = ftell(arq);
    int total_contatos = tamanho_arquivo / sizeof(struct contato);

    int i;
    int encontrado = 0;
    struct contato a;
    for (i = 0; i < total_contatos; i++) {
        fseek(arq, i * sizeof(struct contato), SEEK_SET);
        fread(&a, sizeof(struct contato), 1, arq);
        if (strcmp(a.nome, textopesquisa) == 0) {
            printf("\nContato encontrado:");
            printf("\nCODIGO: %d", a.codigo);
            printf("\nNOME: %s", a.nome);
            printf("\nCELULAR: %s", a.celular);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nContato não encontrado.");
    }

    fclose(arq);

    // Wait for user input before returning to the menu
    printf("\nPressione ENTER para sair");
    getchar(); // Consume the newline character
    getchar(); // Wait for user input
    return 0;
}

int alterarContato() {
    printf("\n Alterando contato!");
    int codigo;
    if ((arq = fopen(FILENAME, "rb+")) == NULL) {
        printf("\n Erro ao abrir o arquivo.");
        exit(1);
    }

    printf("\n Informe o codigo do contato: \n");
    scanf("%d", &codigo);

    struct contato a;
    while (fread(&a, sizeof(a), 1, arq)) {
        if (a.codigo == codigo && a.e == 0) {
            fseek(arq, -sizeof(a), SEEK_CUR);

            printf("\nNome (%s): ", a.nome);
            scanf(" %49[^\n]", a.nome);
            printf("\nTelefone (%s): ", a.telefone);
            scanf(" %13[^\n]", a.telefone);
            printf("\nCelular (%s):", a.celular);
            scanf(" %13[^\n]", a.celular);
            printf("\nSexo (%s): ", a.sexo);
            scanf(" %9[^\n]", a.sexo);

            fwrite(&a, sizeof(a), 1, arq);
            fseek(arq, 0, SEEK_END);
        }
    }

    fclose(arq);
    printf("Alteracao no contato feita com sucesso!");
    getchar();
    return 0;
}

int exclusaoContato() {
    int codigo;
    char resposta;
    printf("\n Exclusao do contato");
    if ((arq = fopen(FILENAME, "rb+")) == NULL) {
        printf("\n Erro ao abrir o arquivo.");
        exit(1);
    }

    printf("\n Informe o codigo do contato para Exclusao: \n");
    scanf("%d", &codigo);

    struct contato a;
    while (fread(&a, sizeof(a), 1, arq)) {
        if (a.codigo == codigo && a.e == 0) {
            printf("\n Codigo: %d", a.codigo);
            printf("\n Nome: %s", a.nome);
            printf("\n Telefone: %s", a.telefone);

            printf("\nDeseja excluir o Registro? (S/N)");
            scanf(" %c", &resposta);

            if (resposta == 'S' || resposta == 's') {
                a.e = 1;
            }

            fseek(arq, -sizeof(a), SEEK_CUR);
            fwrite(&a, sizeof(a), 1, arq);
            fseek(arq, 0, SEEK_END);
        }
    }

    fclose(arq);
    printf("Exclusao feita com sucesso!");
    getchar();
    return 0;
}

int pesquisarNumero() {
    char textopesquisa[14];
    struct contato lista[MAX_CONTACTS];

    printf("\n Pesquisa Numero Celular");
    if ((arq = fopen(FILENAME, "rb")) == NULL) {
        printf("\n Erro ao abrir o arquivo.");
        return 1;
    }

    int i = 0;
    struct contato a;

    while (fread(&a, sizeof(a), 1, arq)) {
        if (a.e == 0) {
            lista[i] = a;
            i++;
        }
    }

    fclose(arq);

    int n = i;
    ordenandoPorNumero(lista, n);

    printf("\n Lista ordenada contato");
    for (i = 0; i < n; i++) {
        printf("\n CODIGO: %d", lista[i].codigo);
        printf("\n NOME: %s", lista[i].nome);
        printf("\n CELULAR: %s", lista[i].celular);
    }
    printf("\n\n");

    capturaCelular();
    buscaCelular(lista, n, textopesquisa);

    // Wait for user input before returning to the menu
    printf("\nPressione ENTER para sair");
    getchar(); // Consume the newline character
    getchar(); // Wait for user input
    return 0;
}

int ordenandoPorNumero(struct contato vetor[], int n) {
    struct contato aux;
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(vetor[i].celular, vetor[j].celular) > 0) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
    return 0;
}

int buscaCelular(struct contato vetor[], int n, const char *celular) {
    int esquerda = 0;
    int direita = n - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        int comparacao = strcmp(vetor[meio].celular, celular);
        if (comparacao == 0) {
            printf("\n Registro encontrado: Celular: %s | Nome: %s | CODIGO: %d", vetor[meio].celular, vetor[meio].nome, vetor[meio].codigo);
            return meio;
        }
        if (comparacao < 0) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    printf("\nRegistro nao encontrado.");

    // Wait for user input before returning to the menu
    printf("\nPressione ENTER para sair");
    getchar(); // Consume the newline character
    getchar(); // Wait for user input
    return -1;
}

int capturaCelular() {
    char textopesquisa[14];
    printf("Informe o celular desejado: ");
    scanf(" %13[^\n]", textopesquisa);
    return 0;
}

int relatorioOrdenadoNome() {
    struct contato lista[MAX_CONTACTS];

    printf("\n Lista Ordenada por Celular");
    if ((arq = fopen(FILENAME, "rb")) == NULL) {
        printf("\n Erro ao abrir o arquivo.");
        return 1;
    }

    int i = 0;
    struct contato a;
    while (fread(&a, sizeof(a), 1, arq)) {
        if (a.e == 0) {
            lista[i] = a;
            i++;
        }
    }

    fclose(arq);

    int n = i;
    ordenandoPorNumero(lista, n);

    printf("\n Lista ordenada");
    for (i = 0; i < n; i++) {
        printf("\n CODIGO: %d", lista[i].codigo);
        printf("\n NOME: %s", lista[i].nome);
        printf("\n CELULAR: %s", lista[i].celular);
    }

    printf("\nOrdenação concluída com sucesso!");

    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Wait for user input before returning to the menu
    printf("\nPressione ENTER para sair");
    getchar(); // Consume the newline character
    getchar(); // Wait for user input
    return 0;
}
