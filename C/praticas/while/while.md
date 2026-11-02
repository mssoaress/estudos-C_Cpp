## while

O `while` repete um bloco de código **enquanto** uma condição for verdadeira. Use quando você não sabe quantas vezes o código vai precisar repetir.

### Sintaxe

```c
while (condicao) {
    // código que se repete
}
```

### Como funciona

1. Testa a condição
2. Se for verdadeira, executa o bloco e volta para o passo 1
3. Se for falsa, sai do loop e continua o programa

### Exemplo

```c
int i = 1;

while (i <= 5) {
    printf("%d\n", i);
    i++;  // sem isso, o loop nunca termina
}
// imprime: 1 2 3 4 5
```

### Comandos úteis

- `break`: sai do loop na hora
- `continue`: pula o resto do bloco e volta para a condição

### Cuidados

- **Loop infinito:** se a condição nunca ficar falsa, o programa não para. Lembre de mudar a variável da condição dentro do loop.
- **Inicialize as variáveis:** a variável usada na condição precisa ter um valor antes do `while` começar.
- Se a condição já for falsa no início, o bloco **não executa nenhuma vez**.

### while vs for

- `while`: quando não se sabe quantas repetições serão feitas (ex: repetir até o usuário acertar)
- `for`: quando já se sabe quantas repetições serão feitas (ex: contar de 1 a 10)