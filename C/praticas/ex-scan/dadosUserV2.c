#include <stdio.h>
#include <string.h>

int main(void) {
    char nome [30];
    char cidade [20];
    char rua [50];
    char bairro [20];
    int numeroCasa;

    char endereco [120];

    char naturalidade [20];
    char sexo [15];
    char curso [20];
    int idade;
    int salario;

    char informacoesPessoais [80];


    printf("nome? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Cidade? ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Rua? ");
    fgets(rua, sizeof(rua), stdin);
    rua[strcspn(rua, "\n")] = '\0';

    printf("Bairro? ");
    fgets(bairro, sizeof(bairro), stdin);
    bairro[strcspn(bairro, "\n")] = '\0';

    printf("Numero da Casa? ");
    scanf("%d", &numeroCasa);
    getchar();

    
    printf("Naturalidade? ");
    fgets(naturalidade, sizeof(naturalidade), stdin);
    naturalidade[strcspn(naturalidade, "\n")] = '\0';
    
    printf("Sexo? ");
    fgets(sexo, sizeof(sexo), stdin);
    sexo[strcspn(sexo, "\n")] = '\0';
    
    printf("Curso? ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0';
    
    printf("Idade? ");
    scanf("%d", &idade);
    
    printf("Salario? ");
    scanf("%d", &salario);
    getchar();
    
    snprintf(endereco, sizeof(endereco), "NOME\t\tCIDADE\t\tRUA\t\tBAIRRO\t\tNº\n" "%s\t\t%s\t\t%s\t\t%s\t\t%d",nome, cidade, rua, bairro, numeroCasa);
    snprintf(informacoesPessoais, sizeof(informacoesPessoais),"NATURALIDADE\tSEXO\tCURSO\tIDADE\tSALARIO\n" "%s\t\t%s\t%s\t%d\t%d",naturalidade, sexo, curso, idade, salario);
    
    printf("ENDEREÇO\n%s\n\n", endereco);
    printf("INFORMAÇOES PESSOAIS\n%s\n", informacoesPessoais);

    // esse codigo me custou alguns bons neuronios
    return 0;
}
