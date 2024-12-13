#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введіть перше ціле число: ");
    scanf("%d", &a);
    
    printf("Введіть друге ціле число: ");
    scanf("%d", &b);
    
    float average = (a + b) / 2.0;
    int difference = a - b;
    int product = a * b;
    
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Різниця: %d\n", difference);
    printf("Добуток: %d\n", product);
    
    return 0;
}
