#include <stdio.h>

int main(void) {
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Este numero é par. \n");
    } 
    else {
        printf("Esse numero é impar. \n");
    }

    
    return 0;
}