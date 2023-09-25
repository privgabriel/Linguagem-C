#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() {

    int idade;
    int idade2;

    printf("Digite a idade1: ");
    scanf("%d", &idade);

    printf("Digite a idade2: ");
    scanf("%d", &idade2);


    if (idade > idade2) {
        printf("A idade1 é maior que a idade2\n");
    }
    else if (idade < idade2) {
        printf("A idade1 é menor que a idade2\n");
    }
    else {
        printf("A idade1 é igual a idade2\n");
    }

    return 0;
}