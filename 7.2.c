#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void initialize_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int product_of_positive_elements(int arr[], int size) {
    int product = 1;
    int has_positive = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            product *= arr[i];
            has_positive = 1;
        }
    }
    return has_positive ? product : 0;
}

int sum_before_last_positive(int arr[], int size) {
    int sum = 0;
    int last_positive_index = -1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            last_positive_index = i;
        }
    }

    if (last_positive_index == -1) return 0;
    
    for (int i = 0; i < last_positive_index; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    srand(time(0));

    int arr[SIZE];
    
    initialize_array(arr, SIZE);
    
    printf("Масив: ");
    print_array(arr, SIZE);
    
    int product = product_of_positive_elements(arr, SIZE);
    int sum = sum_before_last_positive(arr, SIZE);
    
    printf("Добуток додатних елементів: %d\n", product);
    printf("Сума елементів до останнього додатного елемента: %d\n", sum);
    
    return 0;
}
