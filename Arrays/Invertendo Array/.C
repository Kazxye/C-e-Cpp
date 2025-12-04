#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do Array: \n");
    scanf("%d", &n);

    int array[n];

    printf("Digite %d Elementos do Array: \n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n/2; i++){
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    printf("Array Invertido: \n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}
