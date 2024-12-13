#include <stdio.h>

int main() {
    int number;
    printf("Введіть ціле число: ");
    scanf("%d", &number);

    if (number % 2 != 0) {
        printf("Число %d непарне.\n", number);
    } else {
        printf("Число %d парне.\n", number);
    }

    return 0;
}
