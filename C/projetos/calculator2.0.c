#include <math.h>
#include <stdio.h>
#define HISTORICO_MAXIMO 100

int main(void) {
  double historicoOperacoes[HISTORICO_MAXIMO];
  double numero1;
  double numero2;
  double resultado;
  int operacao = -1;
  int quantidadeOperacoes = 0;
  int i;

  while (operacao != 0) {
    printf("===CALCULADORA===\n");
    printf("1- soma\n");
    printf("2- subtração\n");
    printf("3- multiplicação\n");
    printf("4- divisão");
    printf("5- potenciação\n");
    printf("6- raiz quadrada\n");
    printf("7- porcentagem\n");
    printf("8- resto da divisão\n");
    printf("9- média aritmética\n");
    printf("10- valor absoluto\n");
    printf("11- historico\n");
    printf("0- sair\n");
    printf("Qual a opção?\n");

    if (scanf("%d", &operacao) != 1) {
      printf("opção inválida!\n");
      while (getchar() != '\n')
        ;
      continue;
    }
    if (operacao == 0) {
      printf("saindo...\n");
      break;
    }
    if (operacao == 11) {
      printf("===HISTORICO DE RESULTADOS===\n");
      if (quantidadeOperacoes == 0) {
        printf("nenhuma operação recente!\n");
      } else {
        for (i = 0; i < quantidadeOperacoes; i++) {
          printf("%d - %.2f\n", i + 1, historicoOperacoes[i]);
        }
      }
      continue;
    }
    if (operacao < 1 || operacao > 11) {
      printf("opção inválida!\n");
      continue;
    }
    if (operacao == 1) {
      printf("===SOMA===\n");
      printf("qual o primeiro numero?\n");
      scanf("%lf", &numero1);
      printf("qual o segundo numero?\n");
      scanf("%lf", &numero2);
      resultado = numero1 + numero2;
      printf("RESULTADO = %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 2) {
      printf("===SUBTRAÇÃO===\n");
      printf("qual o primeiro numero?\n");
      scanf("%lf", &numero1);
      printf("qual o segundo numero?\n");
      scanf("%lf", &numero2);
      resultado = numero1 - numero2;
      printf("RESULTADO: %2.f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 3) {
      printf("===MULTIPLICAÇÃO===\n");
      printf("qual o primeiro numero?\n");
      scanf("%lf", &numero1);
      printf("qual o segundo numero?\n");
      scanf("%lf", &numero2);
      resultado = numero1 * numero2;
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 4) {
      printf("===DIVISÃO===\n");
      printf("qual o primeiro numero?\n");
      scanf("%lf", &numero1);
      printf("qual o segundo numero?\n");
      scanf("%lf", &numero2);
      resultado = numero1 / numero2;
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 5) {
      printf("===POTENCIAÇÃO===\n");
      printf("digite o numero:\n");
      scanf("%lf", &numero1);
      resultado = numero1 * numero1;
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 6) {
      printf("===RAIZ QUADRADA===\n");
      printf("digite o numero:\n");
      scanf("%lf", &numero1);
      resultado = sqrt(numero1);
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 7) {
      printf("===PORCENTAGEM===\n");
      printf("digite o primeiro numero:\n");
      scanf("%lf", &numero1);
      printf("digite o segundo numero:\n");
      scanf("%lf", &numero2);
      resultado = (numero1 * numero2) / 100;
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 8) {
      printf("===RESTO DA DIVISÃO===\n");
      printf("digite o primeiro numero:\n");
      scanf("%lf", &numero1);
      printf("digite o segundo numero:\n");
      scanf("%lf", &numero2);
      if (numero2 == 0) {
        printf("erro! não pode ser dividido por zero!\n");
      }
      resultado = fmod(numero1, numero2);
      printf("RESULTADO: %.2f\n", resultado);
      historicoOperacoes[quantidadeOperacoes] = resultado;
      quantidadeOperacoes++;
    }
    if (operacao == 9) {
      printf("===MÉDIA ARITIMÉTICA===\n");
      printf("digite o primeiro numero:\n");
      scanf("%lf", &numero1);
      printf("digite o segundo numero:\n");
      scanf("%lf", &numero2);
      resultado = (numero1 + numero2) / 2;
      printf("RESULTADO: %.2f\n", resultado);
    }
    if (operacao == 10) {
      printf("===VALOR ABSOLUTO===\n");
      printf("digite o numero:\n");
      scanf("%lf", &numero1);
      resultado = fabs(numero1);
      printf("RESULTADO: %.2f", resultado);
    }
  }

  return 0;
}
