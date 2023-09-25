#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {
    int idade = 20; //int é um tipo de variável que armazena números inteiros
    float altura = 1.75; //float é um tipo de variável que armazena números reais
    char letra = 'a'; //char é um tipo de variável que armazena caracteres
    char nome[20] = "João"; //char[] é um tipo de variável que armazena uma cadeia de caracteres
    printf("Idade: %d\n", idade); //%d é um placeholder para um número inteiro
    printf("Altura: %f\n", altura); //%f é um placeholder para um número real
    printf("Letra: %c\n", letra); //%c é um placeholder para um caractere
    printf("Nome: %s\n", nome); //%s é um placeholder para uma cadeia de caracteres
    int variavel1 = 2; //Declaração de variável
    int variavel2 = 3; //Declaração de variável
    int soma = variavel1 + variavel2; //Soma de variáveis
    variavel1++; //Incrementa a variável em 1
    printf("Soma: %d\n", soma); //%d é um placeholder para um número inteiro
    return 0;  //Retorna 0 para o sistema operacional
}