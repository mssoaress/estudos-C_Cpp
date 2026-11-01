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