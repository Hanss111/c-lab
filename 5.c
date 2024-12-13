#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];
    int count = 0;
    double product = 1.0;

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            product *= a[i];
            count++;
        }
    }

    if (count > 0) {
        double geometric_mean = pow(product, 1.0 / count);
        printf("Середнє геометричне додатніх елементів масиву: %.6lf\n", geometric_mean);
    } else {
        printf("Немає додатніх елементів в масиві.\n");
    }

    return 0;
}
