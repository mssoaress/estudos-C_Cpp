#include <stdio.h>

int main(void) {
    int numero1;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    int numero2;
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int resultado = numero1 + numero2;

    printf("a soma dos dois numeros são: %d\n", resultado);

    return(0);
}