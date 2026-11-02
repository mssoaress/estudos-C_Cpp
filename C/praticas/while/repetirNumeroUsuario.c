#include <stdio.h>

int main(void) {

  int numeroUser;
  int contador = 1;

  printf("Digite um numero: ");
  scanf("%d", &numeroUser);

  while (contador <= numeroUser) {
    printf("%d\n", contador);
    contador ++;
  }

  return 0;
}