#include <stdio.h>

int main() {
    float nums[5] = {10.5, 20.5, 30.5, 40.5, 50.5};

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", nums[i]);
    }
}