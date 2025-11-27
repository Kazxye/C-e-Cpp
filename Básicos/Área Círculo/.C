#include <stdio.h>
#include <math.h>

int main(){
    float pi = 3.14;
    float area;
    int diametro;
    float raio;

    printf("Digite o diametro do circulo: \n");
    scanf("%d", &diametro);

    raio = diametro / 2.0;
    area = pi * pow(raio,2);

    printf("A area do circulo de diametro %d e %f", diametro, area);
    return 0;

}