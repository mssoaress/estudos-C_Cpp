#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[30];
    printf("Nome? ");
    fgets(nome, sizeof(nome), stdin);
    
    char rua[50];
    printf("Rua? ");
    fgets(rua, sizeof(rua), stdin);
    
    char bairro[20];
    printf("Bairro? ");
    fgets(bairro, sizeof(bairro), stdin);
    
    int numeroCasa;
    printf("Numero da casa? ");
    scanf("%d", &numeroCasa);

    // Removendo as quebras de linha
    nome[strcspn(nome, "\n")] = '\0';
    rua[strcspn(rua, "\n")] = '\0';
    bairro[strcspn(bairro, "\n")] = '\0';

    printf("\nNome: %s\n", nome);
    printf("Endereco: %s, %d - %s\n", rua, numeroCasa, bairro);

    return 0;
}