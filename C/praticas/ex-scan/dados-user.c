#include <stdio.h>
#include <string.h>

int main(void) {
    char nome [30];
    printf("nome? ");
    fgets(nome, sizeof(nome), stdin);

    char rua [50];
    printf("rua? ");
    fgets(rua, sizeof(rua), stdin);

    char bairro [20];
    printf("bairro? ");
    fgets(bairro, sizeof(bairro), stdin);

    int numeroCasa;
    printf("numero da casa? ");
    scanf("%d", &numeroCasa);

    nome[strcspn(nome, "\n")] = '\0';
    rua[strcspn(rua, "\n")] = '\0';
    bairro[strcspn(bairro, "\n")] = '\0';

    printf("\nNome: %s\n", nome);
    printf("Endereco: %s, %d - %s\n", rua, numeroCasa, bairro);

    return 0;
}
