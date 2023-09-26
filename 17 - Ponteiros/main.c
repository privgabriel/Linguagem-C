#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

void addOne(int* valor) {
    (*valor)++;
    printf("Valor dentro da função: %d\n", *valor);
}

int main() {

    int valor = 5;
    addOne(&valor);
    printf("Valor: %d\n", valor);
    return 0;
}



