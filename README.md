# Repositório de Estudos em C e C++

## char 1 caractere %c
## int %d
## float %.numero de casas f %.1f
## %s para "strings"

## fgets(variavel, sizeof(variavel), stdin ); guarda o input string do usuario
## scanf("%d", &variavel); para inputs int


# Usando o Fgets
## // Removendo as quebras de linha
    nome[strcspn(nome, "\n")] = '\0';
    rua[strcspn(rua, "\n")] = '\0';
    bairro[strcspn(bairro, "\n")] = '\0'; 
## Ela serve para remover a quebra de linha (\n) que o fgets() pode deixar no final de uma string.


# snprintf
## // Juntar todas as informacoes
    snprintf(endereco, sizeof(endereco), "%s, %d - %s", rua, numeroCasa, bairro);
