#include <stdio.h>



int main (){
    
int primeiroNumero;
int segundoNumero;
int terceiroNumero;
int media;
    
printf("Digite o primeiro numero: \n");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: \n");
    scanf("%d", &segundoNumero);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &terceiroNumero);

    media = (primeiroNumero + segundoNumero + terceiroNumero) / 3;
    printf("A media de %d, %d e %d = %d", primeiroNumero, segundoNumero, terceiroNumero, media);
    return 0;
}