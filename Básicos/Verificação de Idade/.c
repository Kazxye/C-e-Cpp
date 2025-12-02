#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Menor de Idade\n");
    } else if(idade >= 18 && idade < 65){
        printf("Maior de Idade\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}