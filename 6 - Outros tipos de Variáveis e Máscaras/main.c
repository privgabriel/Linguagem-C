#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() //Função principal
{
    //Mascaras de formatação de saída de dados exemplo %d, %f, %c, %s
    // %d = inteiro
    // %i = inteiro
    //%U = inteiro sem sinal
    //%O = octal
    //%x = hexadecimal
    //%X = hexadecimal maiusculo
    //%f = ponto flutuante
    //%F = ponto flutuante
    //%e = Notação cientifica
    //%E = Notação cientifica
    //%a = Notação cientifica hexadecimal
    //%A = Notação cientifica hexadecimal
    //%c = caractere
    //%s = string
    //%p = ponteiro

    int inteiro = 100;
    float pontoFlutuante = 3.1415;
    double pontoFlutuanteDuplo = 3.14159265358979323846;
    char caractere = 'A';
    printf("Inteiro: %d\n", inteiro);
    printf("Ponto flutuante: %.2f\n", pontoFlutuante); //%.2f = 2 casas decimais
    printf("Ponto flutuante duplo: %.3f\n", pontoFlutuanteDuplo); //%.2lf = 2 casas decimais
    printf("Caractere: %c\n", caractere);

     return 0; //Retorna 0 para o sistema operacional
}