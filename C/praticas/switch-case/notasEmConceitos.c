#include <stdio.h>

int main(void) {

  int nota;

  printf("Qual a nota? ");
  scanf("%d", &nota);

  switch (nota) {
  case 10:
  case 9:
    printf("Conceito A \n");
    break;
  case 8:
  case 7:
    printf("Conceito B\n");
    break;
  case 6:
  case 5:
    printf("Conceito C\n");
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("Conceito F\n");
  default:
    break;
  }

  return 0;
}