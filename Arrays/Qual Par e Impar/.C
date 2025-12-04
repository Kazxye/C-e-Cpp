#include <stdio.h>

int main() {
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
        if(nums[i] % 2 == 0) {
            printf("O numero %d e par", nums[i]);
        }
        else {
            printf("O numero %d e impar", nums[i]);
        }
    }
    return 0;
}