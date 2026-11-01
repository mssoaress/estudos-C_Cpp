#include <stdio.h>

int main(void) {

  int opcao;

  printf("1- Cachorro Quente\n");
  printf("2- Coxinha\n");
  printf("3- Pastel\n");
  printf("4- Coca\n");
  printf("5- Guaraná");

  printf("Qual preço quer consultar? \n");
  scanf("%d", &opcao);

  switch (opcao) {
  case 1:
    printf("4 R$\n");
    break;
  case 2:
    printf("5 R$\n");
    break;
  case 3:
    printf("3 R$\n");
    break;
  case 4:
    printf("2 R$\n");
    break;
  case 5:
    printf("2 R$\n");
    break;
  default:
    printf("Escolha uma opção válida!");
    break;
  }

  return 0;
}