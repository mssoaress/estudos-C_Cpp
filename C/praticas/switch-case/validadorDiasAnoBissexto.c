#include <stdio.h>

int main(void) {

  printf("Verificador de Dias do Mes, e ano bissexto. \n");

  int mes;
  int ano;

  printf("mes? \n");
  scanf("%d", &mes);

  printf("ano? \n");
  scanf("%d", &ano);

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("O mes tem 31 dias. \n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("o mes tem 30 dias. \n");
    break;
  case 2:
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
      printf("O ano é bissexto, e o mes tem 29 dias.\n");
    } else {
      printf("o mes tem 28 dias.\n");
    }
    break;
  default:
    printf("numero inválido! insira um numero de 1 a 12.");
    break;
  }
  return 0;
}