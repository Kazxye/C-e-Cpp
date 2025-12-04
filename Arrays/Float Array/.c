#include <stdio.h>

int main() {
    float numeros[4] = {10.4, 20.5, 30.6, 40.7};

    for(int i = 0; i < 4; i ++) {
        printf("%.2f,  ", numeros[i]);
    }

    float media = 0;

    for(int i = 0; i < 4; i ++){
        media += numeros[i];
    }

    media = media / 4;
    printf("A media dos numeros e : %.2f", media);

    return 0;

}