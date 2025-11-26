#include <stdio.h>

int main() {
    float temperaturaCelsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &temperaturaCelsius);

    fahrenheit = (temperaturaCelsius * 1.8) + 32;
    printf("A temperatura em Fahrenheit é: %f", fahrenheit);
    return 0;
}