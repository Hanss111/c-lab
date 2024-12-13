#include <stdio.h>
#include <math.h>

int main() {
    int x = 3, y = 2;
    double f;

    f = (pow(x, 2) + log2(x * y) - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2));

    printf("Значення функції f = %.4f\n", f);

    return 0;
}
