#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[30];
    char rua[50];
    char bairro[20];
    int numeroCasa;

    char endereco[120];

    printf("Nome? ");
    fgets(nome, sizeof(nome), stdin);

    printf("Rua? ");
    fgets(rua, sizeof(rua), stdin);

    printf("Bairro? ");
    fgets(bairro, sizeof(bairro), stdin);

    printf("Numero da casa? ");
    scanf("%d", &numeroCasa);

    // Remover quebras de linha
    rua[strcspn(rua, "\n")] = '\0';
    bairro[strcspn(bairro, "\n")] = '\0';

    // Juntar todas as informacoes
    snprintf(endereco, sizeof(endereco), "%s, %d - %s", rua, numeroCasa, bairro);

    // Mostrar o endereco completo
    printf("\nEndereco: %s\n", endereco);

    return 0;
}