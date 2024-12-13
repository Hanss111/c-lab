#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    int a[n];
    int first_zero = -1, last_zero = -1;
    int product = 1;
    int min_abs = 101;  

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (abs(a[i]) < abs(min_abs)) {
            min_abs = a[i];
        }

        if (a[i] == 0) {
            if (first_zero == -1) first_zero = i;
            last_zero = i;
        }
    }

    if (first_zero != -1 && last_zero != -1 && first_zero < last_zero) {
        for (int i = first_zero + 1; i < last_zero; i++) {
            product *= a[i];
        }
        printf("Добуток елементів між першим і останнім нульовими елементами: %d\n", product);
    } else {
        printf("Немає елементів між першим і останнім нульовими елементами.\n");
    }

    printf("Мінімальний за модулем елемент масиву: %d\n", min_abs);

    return 0;
}
