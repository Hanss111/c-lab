#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2;

    printf("Введіть коефіцієнти квадратного рівняння (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("Це не квадратне рівняння.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Квадратне рівняння має два різних дійсних корені: %.2f і %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Квадратне рівняння має один дійсний корінь: %.2f\n", root1);
    } else {
        printf("Квадратне рівняння не має дійсних коренів.\n");
    }

    return 0;
}
