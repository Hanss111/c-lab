#include <stdio.h>
#include <math.h>

int main() {
    double a, b, dx;
    double x, y;

    printf("Введіть значення a (початкове значення x): ");
    scanf("%lf", &a);

    printf("Введіть значення b (кінцеве значення x): ");
    scanf("%lf", &b);

    printf("Введіть значення dx (крок): ");
    scanf("%lf", &dx);

    if (a <= 0) {
        printf("Помилка: a повинно бути більше нуля для обчислення логарифма.\n");
        return 1;
    }

    if (4 * a + 13 == 0) {
        printf("Помилка: ділення на нуль у точці a.\n");
        return 1;
    }

    printf("x\t\t\t y = ln(x) / (4x + 13)\n");
    printf("---------------------------------------------\n");

    for (x = a; x <= b; x += dx) {
        if (x <= 0) {
            printf("x = %.3lf: Помилка: логарифм від від'ємного чи нульового числа.\n", x);
        } else if (4 * x + 13 == 0) {
            printf("x = %.3lf: Помилка: ділення на нуль.\n", x);
        } else {
            y = log(x) / (4 * x + 13);
            printf("%.3lf\t\t %.6lf\n", x, y);
        }
    }

    return 0;
}
