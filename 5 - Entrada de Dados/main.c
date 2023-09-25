#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções

int main() //Função principal
{
    int entrada; //Declaração de variável
    printf("Digite um número: "); //Imprime na tela a mensagem "Digite um número: "
    scanf("%d", &entrada); //Lê a entrada do usuário e armazena na variável "entrada"
    printf("Você digitou: %d", entrada); //Imprime na tela a mensagem "Você digitou: " e o valor da variável "entrada"
    return 0; //Retorna 0 para o sistema operacional
}