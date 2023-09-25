#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {
    float v1;
    float v2;
    char op;
    float resultado;
    

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1); //Lê o valor digitado pelo usuário

    printf("Digite o segundo valor: ");
    scanf("%f", &v2); //Lê o valor digitado pelo usuário

    printf("Digite a operação: ");
    scanf(" %c", &op); //Lê o valor digitado pelo usuário

    if (op == '+') {
        resultado = v1 + v2;
    }
    else if (op == '-') {
        resultado = v1 - v2;
    }
    else if (op == '*') {
        resultado = v1 * v2;
    }
    else if (op == '/') {
        resultado = v1 / v2;
    }
    else {
        printf("Operação inválida\n");
        return 0;
    }

    printf("O resultado da operação é: %f\n", resultado);
    return 0;
}
    

