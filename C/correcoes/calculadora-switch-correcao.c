#include <stdio.h>

int main(void) {

    printf("calculadora");

    int numero1;
    int numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int opcao;

    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");

    printf("Qual a opçao?\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("%d\n", numero1 + numero2);
        break;
    case 2:
        printf("%d\n", numero1 - numero2);
        break;
    case 3:
        printf("%d\n", numero1 * numero2);
        break;
    case 4:
        if (numero2 != 0) {
            printf("%.2f", (float) numero1 / numero2);
        } else {
            printf("Erro, divisao por zero não é permitida!");
        }
    default:
        printf("Digite uma opçao valida!!");
        break;
    }
    
    return 0;
}