#include <stdio.h>

int main(void) {
  double peso, altura, imc;

  printf("Calculadora IMC\n");

  printf("qual é seu peso? ");
  scanf("%lf", &peso);
  printf("qual é sua altura? ");
  scanf("%lf", &altura);

  imc = peso / (altura * altura);

  if (imc < 18.5) {
    printf("voce está fininho: %.2f\n", imc);
  } else if (imc >= 18.5 && imc < 24.9) {
    printf("tudo em ordem: %.2f\n ", imc);
  } else if (imc > 25 && imc > 29.9) {
    printf("ta roliço: %.2f\n", imc);
  } else {
    printf("tá gordao: %.2f\n", imc);
  }
}