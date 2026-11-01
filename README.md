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

## Switch Case em C

Estrutura de seleção usada para comparar uma variável de tipo inteiro (`int`, `char`, `enum`) contra múltiplos valores fixos.

### Sintaxe Básica
```c
switch (expressao) {
    case valor1:
        // Código para valor1
        break; // Interrompe e sai do switch
    case valor2:
        // Código para valor2
        break;
    default:
        // Executado se nenhum caso for atendido
        break;
}

## Estruturas Condicionais: `if`, `else if` e `else` em C

Utilizadas para executar blocos de código com base no teste de condições lógicas (`verdadeiro` ou `falso`).

### Sintaxe Básica
```c
if (condicao1) {
    // Executado se condicao1 for verdadeira (diferente de 0)
} else if (condicao2) {
    // Executado se condicao1 for falsa e condicao2 for verdadeira
} else {
    // Executado se todas as condições anteriores forem falsas
}