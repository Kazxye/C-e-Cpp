#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    if(a > b) {
        printf("O numero %d é maior do que o numero %d", a, b);
    }  
    else if(b > a){
        printf("O numero %d é maior do que o numero %d", b, a);
    }
    else {
        printf("Os numeros %d e %d são iguais", a, b);
    }
    return 0;
}