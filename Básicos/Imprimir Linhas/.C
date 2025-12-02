#include <stdio.h>

int main () {
    int linhas;

    printf("Digite a quantidade de linhas que deseja imprimir\n");
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++) {
        printf("Linha %d\n", i+1);
    }
}