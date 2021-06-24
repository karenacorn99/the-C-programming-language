#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    for (int F = LOWER; F <= UPPER; F += STEP) {
        printf("%3d\t%5.1f\n", F, (5.0 / 9.0) * (F - 32));
    }
}
