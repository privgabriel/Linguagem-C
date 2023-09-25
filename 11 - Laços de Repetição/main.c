#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {

    int contador;

    // while(contador < 10) { //Enquanto o contador for menor que 10
    //     printf("O valor do contador é: %d\n", contador);
    //     contador += 1;
    // }

    for (contador = 0; contador < 10; contador+=1) {
        printf("O valor do contador é: %d\n", contador);
    }

    return 0;
}