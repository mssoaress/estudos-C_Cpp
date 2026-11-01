#include <stdio.h>

int main(void) {

    printf("Verificação de ano bissexto: ");

    int ano;

    printf("Qual o ano? ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("o ano é bissexto \n");
    } else {
        printf("o ano não é bissexto \n");
    }

    return 0;
}