#include <stdio.h>

int main(void) {

  int numero1;
  int numero2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("digite o segundo numero: ");
  scanf("%d", &numero2);

  if (numero1 > numero2) {
    printf("O primeiro numero é maior\n");
  } else if (numero1 < numero2) {
    printf("O segundo numero é maior\n");
  } else {
    printf("Os dois numeros sao iguais\n");
  }

  return 0;
}