#include <stdio.h>

int main() {
    int primeiroNumero;
    int segundoNumero;
    int soma;

    printf("Digite o primeiro número: \n");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: \n");
    scanf("%d", &segundoNumero);

    soma = primeiroNumero + segundoNumero;
    printf("A soma de %d + %d = %d", primeiroNumero, segundoNumero, soma);
    return 0;
}
