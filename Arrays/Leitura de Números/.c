#include <stdio.h>

int main() {
    int nums[5];

    printf("Digite 5 numeros: \n");
    scanf("%d", &nums[0]);
    scanf("%d", &nums[1]);
    scanf("%d", &nums[2]);
    scanf("%d", &nums[3]);
    scanf("%d", &nums[4]);

    printf("Os numeros digitados foram: \n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }

    printf("A soma dos números digitados e: ");
    int soma = 0;
    for(int i = 0; i < 5; i++) {
        soma += nums[i];
    }
    printf("%d\n", soma);
    return 0;

}