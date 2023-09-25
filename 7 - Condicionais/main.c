#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() //Função principal
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor); //Lê o valor digitado pelo usuário

    if (valor > 10) {
       printf("O valor digitado é maior que 10\n");
    }
    else {
       printf("O valor digitado é menor ou igual a 10\n");
    }
    
    return 0; //Retorna 0 para o sistema operacional
}