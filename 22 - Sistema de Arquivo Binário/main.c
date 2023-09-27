#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char nome[50];
} s_pessoa;

int main() {

    s_pessoa p;
    p.idade = 20;
    strcpy(p.nome, "João");

    FILE* fp = fopen("arquivo.bin", "wb"); // wb = write binary (escrita binária)
    fread(&p, sizeof(s_pessoa), 1, fp); // 1 = quantidade de elementos
    fclose(fp);

    printf("%d %s\n", p.idade, p.nome); // 20 João

    return 0;
}