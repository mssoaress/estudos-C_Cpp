#include <stdio.h>

int main(void) {

  int idade;

  printf("Qual a sua idade? ");
  scanf("%d", &idade);

  if (idade < 18) {
    printf("voce nao pode dirigir \n");
  } else if (idade >= 18 && idade < 70) {
    printf("voce pode dirigir \n");
  } else {
    printf("voce nao pode dirigir \n");
  }

  return 0;
}