#include <stdio.h>

int main() {
    int a = 3, b = 24, c = 13;
    float y;

    y = (a + 4 * b - c * c) / (2.0 * a * b * c);

    printf("Значення функції y = %.2f\n", y);

    return 0;
}
