#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int limite = 10;
  int numeroSecreto = rand() % limite + 1;
  int chute = 0;

  while (numeroSecreto != chute) {
    printf("qual o palpite? ");
    scanf("%d", &chute);

    if (chute > 10) {
      printf("Numero inválido, selecione um numero de até: %d \n", limite);
      continue;
    }

    if (numeroSecreto == chute) {
      printf("voce acertou! \n");
      break;
    } else if (numeroSecreto > chute) {
      printf("voce errou, tente novamente! \n");
      printf("dica: o numero é maior\n");
    } else if (numeroSecreto < chute) {
      printf("voce errou, tente novamente! \n");
      printf("dica: o numero é menor\n");
    }
  }

  return 0;
}