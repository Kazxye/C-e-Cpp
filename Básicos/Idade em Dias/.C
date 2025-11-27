#include <stdio.h>

int main () {
    int anos;
    int diasdeVida;

    printf("Digite sua idade em Anos: \n");
    scanf("%d", &anos);

    diasdeVida = anos * 365;
    printf("A sua idade em Dias e aproximadamente %d", diasdeVida);
    return 0;

    
}