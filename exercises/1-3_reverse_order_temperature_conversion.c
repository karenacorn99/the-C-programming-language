#include <stdio.h>

int main() {
    printf("Temperature Conversion Table Reverse Order\n");

    for(int F = 300; F >= 0; F -= 20) {
        printf("%3d\t%5.1f\n", F, (5.0 / 9.0) * (F - 32));
    }
}
