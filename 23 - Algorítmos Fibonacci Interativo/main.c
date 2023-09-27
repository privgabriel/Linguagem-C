#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Exemplo 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

void fibonacci(int qtd) {

    int atual = 1;
    int anterior = 0;
    int novoNumero;
    int contador;

    qtd --;
    printf("1 ");
    for(contador = 0; contador < qtd; contador++) {
        novoNumero = atual + anterior;
        printf("%d ", novoNumero);
        anterior = atual;
        atual = novoNumero;
    }

}
int main() {

    printf("Executando função de fibonacci...\n");

    fibonacci(50);

    return 0;
}