#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int product_of_positive_elements(int* arr, int n) {
    int product = 1;
    int found_positive = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            product *= arr[i];
            found_positive = 1;
        }
    }

    return found_positive ? product : 0;
}

int sum_before_last_positive(int* arr, int n) {
    int sum = 0;
    int last_positive_index = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            last_positive_index = i;
        }
    }

    if (last_positive_index != -1) {
        for (int i = 0; i < last_positive_index; i++) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int n;
    printf("Введіть кількість елементів масиву (n): ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    
    srand(time(NULL));

    generate_array(arr, n);
    
    printf("Масив: ");
    print_array(arr, n);
    
    int product = product_of_positive_elements(arr, n);
    printf("Добуток додатних елементів масиву: %d\n", product);
    
    int sum = sum_before_last_positive(arr, n);
    printf("Сума елементів масиву до останнього додатного елемента: %d\n", sum);
    
    free(arr);

    return 0;
}
