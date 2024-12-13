#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double x;

    printf("Введіть значення a: ");
    scanf("%d", &a);

    printf("Введіть значення b: ");
    scanf("%d", &b);

    x = (2 * cos(a) - pow(b, 2)) / (3 * (pow(a, 2) - 3 * b));

    printf("Значення функції: %lf\n", x);

    return 0;
}
