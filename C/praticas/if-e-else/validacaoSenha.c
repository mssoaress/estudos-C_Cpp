#include <stdio.h>

int main(void) {

    int senha;

    printf("Crie uma senha: ");
    scanf("%d", &senha);

    int senhaInserida;

    printf("Digite a senha: ");
    scanf("%d", &senhaInserida);

    if (senha == senhaInserida) {
        printf("Sua senha esta correta! \n");
    } else {
        printf("Sua senha está errada. \n");
    }

    return 0;
}