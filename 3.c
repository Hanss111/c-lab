#include <stdio.h>
#include <math.h>

int main() {
    int f = 6, r = 4;
    double e;

    if (f >= 5) {
        e = (3 * f + 2 * r) / sqrt(8 * r);
    } else if (f > -5) {
        e = (2 * f - 4) / (double) f;
    } else {
        e = f * r - 9;
    }

    printf("Значення e = %.4f\n", e);

    return 0;
}
