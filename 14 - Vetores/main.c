#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {

    int tamanho = 3;
    int vetor[tamanho]; //Declaração de um vetor de 5 posições
    int index;

    for(index = 0; index < tamanho; index++) {
        printf("Digite o valor da posição %d: ", index);
        scanf("%d", &vetor[index]);
    }




    // printf("O valor da posição 0 é: %d\n", vetor[0]);
    // printf("O valor da posição 1 é: %d\n", vetor[1]);
    // printf("O valor da posição 2 é: %d\n", vetor[2]);
    printf("%d %d %d\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}