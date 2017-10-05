#include <stdio.h>
#include <conio.h>


int main () {
    FILE *arq;
    int opcao;
    char nome[100];
    arq = fopen ("nomes.txt", "w"); //abrir o arquivo
    do {
        printf("\n1 - Inserir novo nome");
        printf("\n2 - Sair");
        printf("\nOpcao desejada: ");
        scanf("%d",&opcao);
        fflush(stdin);
        if(opcao == 1) {
            printf("\n Digite o nome da pessoa:");
            gets(nome);
            fputs(&nome,arq);  // escreve no arquivo
            putc('\n', arq);    // escrever 1 char no arquivo

        }
    }
    while(opcao != 2);
    fclose(arq);    // fechar o arquivo.
    getch();
}
