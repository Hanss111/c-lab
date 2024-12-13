#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("Введіть координати першої вершини (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Введіть координати другої вершини (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Введіть координати третьої вершини (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    double perimeter = a + b + c;
    double triangle_area = area(x1, y1, x2, y2, x3, y3);

    printf("Периметр трикутника: %.2lf\n", perimeter);
    printf("Площа трикутника: %.2lf\n", triangle_area);

    return 0;
}
