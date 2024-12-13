#include <stdio.h>

int main() {
    float a = 1, b = 2, c = 3;
    float volume = a * b * c;
    float surface_area = 2 * (a * b + b * c + c * a);
    
    printf("Об'єм: V = %.2f\n", volume);
    printf("Площа поверхні: S = %.2f\n", surface_area);
    
    return 0;
}
