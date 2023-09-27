#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct pessoa {
    char nome[50];
    int idade;
};
int main() {
    struct pessoa p1;
    struct pessoa p2;

    strcpy(p1.nome, "João");
    strcpy(p2.nome, "Maria");
    p1.idade = 10;
    p2.idade = 20;

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Nome: %s\n", p2.nome);
    printf("Idade: %d\n", p2.idade);


    return 0;
}