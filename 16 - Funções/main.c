#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão de funções
#include <string.h> //Biblioteca para manipulação de strings


//void significa que a função não retorna nada

int retornaQuantidadeChar(char s[], char letra) {
    int index;
    int quantidade = strlen(s);
    int contador = 0;
    for(index = 0; index < quantidade; index++) {
        if(s[index] == letra) {
            contador++;
        }
    }
    return contador;    
}
int main() {
    
    printf("%d\n", retornaQuantidadeChar("Olá tudo bem com você?", 'e'));
    return 0;  
}