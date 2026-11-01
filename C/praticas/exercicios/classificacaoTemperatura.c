#include <stdio.h>

int main(void) {

  float temperatura;

  printf("Qual temperatura de hoje? ");
  scanf("%f", &temperatura);

  if (temperatura < 15) {
    printf("frio\n");
  } else if (temperatura >= 15 && temperatura <= 25) {
    printf("temperatura normal\n");
  } else {
    printf("está calor\n");
  }

  return 0;
}