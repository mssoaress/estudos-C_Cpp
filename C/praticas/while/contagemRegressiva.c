#include <stdio.h>

int main(void) {

  int numeroUser;

  printf("Digite um numero: ");
  scanf("%d", &numeroUser);

  while (numeroUser >= 0) {
    printf("%d\n", numeroUser);
    numeroUser--;
  }
  printf("FIM!\n");

  return 0;
}