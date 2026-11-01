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