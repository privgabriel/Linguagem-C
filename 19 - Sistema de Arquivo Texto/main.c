#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* arquivo;
    arquivo = fopen("arquivo.txt", "a+"); // w = write, r = read, a = append
    // ou seja w = somente a escrita, r = somente a leitura, a = escrita no final do arquivo
    // rb = leitura de arquivo binario, wb = escrita de arquivo binario, ab = escrita de arquivo binario no final do arquivo
    // r+ = leitura e escrita, w+ = leitura e escrita, a+ = leitura e escrita no final do arquivo
    // rb+ = leitura e escrita de arquivo binario, wb+ = leitura e escrita de arquivo binario, ab+ = leitura e escrita de arquivo binario no final do arquivo

    char strPalavra[55] = "Testando string em arquivo\n";
    int valor = 55;
    float fvalor = 55.55;

    fprintf(arquivo, "%s", strPalavra); // escreve a string no arquivo
    fprintf(arquivo, "Hello World!\n");
    fprintf(arquivo, "Valor: %d %f\n", valor, fvalor); // escreve o valor no arquivo
    fscanf(arquivo, "%d %f", &valor, &fvalor); // le o valor do arquivo")

    fclose(arquivo); // fecha o arquivo para que ele possa ser aberto novamente

    printf("Valor: %d %f\n", valor, fvalor); // escreve o valor no arquivo


    return 0;
}

