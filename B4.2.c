#include <stdio.h>

int main() {
    int sum = 0;
    int i = 12;

    while (i <= 20) {
        sum += i;
        i += 2;
    }

    int cube = sum * sum * sum;
    printf("Куб суми всіх парних чисел у діапазоні (10; 20]: %d\n", cube);

    return 0;
}
