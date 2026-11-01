#include <stdio.h>

int main(void) {

  float valorCompra;

  printf("Qual o valor total da compra? ");
  scanf("%f", &valorCompra);

  if (valorCompra > 1000) {
    float valorFinal = valorCompra * 0.90;
    printf("Desconto de 10%% aplicado! ");
    printf("Valor total a pagar: R$: %.2f\n", valorFinal);
  } else {
    printf("O desconto nao foi aplicado, valor R$: %2.f\n", valorCompra);
  }

  return 0;
}
