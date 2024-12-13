#include <stdio.h>

int main() {
    int n;
    double x;
    double sum = 0.0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            sum += x / j;
        }
    }

    printf("Значення подвійної суми: %.6lf\n", sum);

    return 0;
}
