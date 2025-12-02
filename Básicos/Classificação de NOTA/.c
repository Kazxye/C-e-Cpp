#include <stdio.h>

int main() {
    int primeiraNota;
    int segundaNota;
    int terceiraNota;
    float media;

    printf("Digite sua primeira nota: \n");
    scanf("%d", &primeiraNota);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &segundaNota);

    printf("Digite sua Terceira Nota: \n");
    scanf("%d", &terceiraNota);

    media = (primeiraNota + segundaNota + terceiraNota) / 3.0;

    printf("Sua media das Notas foi : %.2f \n", media);

    return 0;
    
}