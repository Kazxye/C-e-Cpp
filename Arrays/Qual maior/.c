#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[10] = {12, 21, 100, 43, 54, 60, 71, 82, 93, 90};

    int maior = nums[0];
    for(int i = 0; i < 10; i++) {
        if(nums[i] > maior) {
            maior = nums[i];
        }
    }
    printf("O maior numero é: %d", maior);
    return 0;

}
