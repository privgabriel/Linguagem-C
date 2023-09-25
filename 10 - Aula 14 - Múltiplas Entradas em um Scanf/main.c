#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções


int main() {
    float v1;
    float v2;
    char op;
    float resultado;

    // printf("Digite o primeiro valor: ");
    // scanf("%f", &v1); //Lê o valor digitado pelo usuário

    // printf("Digite o segundo valor: ");
    // scanf("%f", &v2); //Lê o valor digitado pelo usuário

    // printf("Digite a operação: ");
    // scanf(" %c", &op); //Lê o valor digitado pelo usuário

    printf("Entre com o primeiro valor, a operação e o segundo valor: ");
    scanf("%f %c %f", &v1, &op, &v2);

    switch (op)
    {
    case '+':
        resultado = v1 + v2;
        break;
    case '-':
        resultado = v1 - v2;
        break;

    case '*':
        resultado = v1 * v2;
        break;

    case '/':
        resultado = v1 / v2;
        break;
    
    default:
        break;
    }

    printf("O resultado da operação é: %f\n", resultado);
    return 0;
}
