# Calculadora em C

Uma calculadora interativa para linha de comandos desenvolvida em C. O programa executa diversas operações matemáticas, faz a validação de entradas de dados e armazena o histórico dos resultados das operações realizadas.

---

## Funcionalidades

- **Operações Básicas:** Adição, Subtração, Multiplicação e Divisão (com proteção contra divisão por zero).
- **Operações Avançadas:** Potenciação, Raiz Quadrada, Porcentagem, Resto da Divisão (`fmod`), Média Aritmética e Valor Absoluto (`fabs`).
- **Histórico de Resultados:** Guarda até 100 resultados da sessão atual.
- **Tratamento de Erros:** Validação de entradas para evitar loops infinitos quando o utilizador digita letras ou opções inválidas.

---

## Como Compilar e Executar

### Pré-requisitos
Ter o compilador `gcc` instalado no teu sistema.

### Passo 1: Compilar o código
Abre o terminal na pasta do projeto e executa:

```bash
gcc -o calculadora main.c -lm