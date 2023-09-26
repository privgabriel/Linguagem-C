#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {

    char str[10] = "Hello";
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l'; 
    str[4] = 'o';
    str[5] = '\0'; //Caractere nulo para indicar o fim da string IMPORTANTE
    printf("%s\n", str);

    return 0;
}