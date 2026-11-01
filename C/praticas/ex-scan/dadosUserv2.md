## Limpeza de Buffer em C (`scanf` vs `fgets` / `getchar`)

### O Problema
Ao pressionar `Enter` após um `scanf`, o valor vai para a variável, mas o `\n` permanece no buffer.

### Soluções Recomendadas

#### 1. Antes de chamar `getchar()`
Use um loop simples para consumir todos os caracteres restantes no buffer até a quebra de linha:

```c
scanf("%d", &numero);

// Limpa o buffer acumulado (incluindo o \n)
while (getchar() != '\n'); 

char c = getchar(); // Agora aguarda a entrada normalmente