#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    int idade;
    char nome[51];

} Pessoa;


int main() {
    Pessoa p[5];
    int index;

    for (index = 0; index < 5; index++) {
        printf("Digite o nome da pessoa %d: ", index + 1);
        scanf("%s", p[index].nome);
        printf("Digite a idade da pessoa %d: ", index + 1);
        scanf("%d", &p[index].idade);
    }

    Pessoa auxiliar = p[0];

    for (index = 0; index <5; index++) {
        if(auxiliar.idade < p[index].idade) {
            auxiliar = p[index];
        }
    }

    printf("Pessoa mais velha: %s\n", auxiliar.nome);
    printf("Idade: %d\n", auxiliar.idade);
    return 0;
}