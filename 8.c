#include <stdio.h>

void replace_negative_elements(int* arr, int size) {
    int max_positive = 0;
    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max_positive) {
            max_positive = *(arr + i);
        }
    }

    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0) {
            *(arr + i) = max_positive;
        }
    }
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int a[] = {6, -63, 12, -33, 77, 24};
    int n = 6;

    printf("Масив до заміни: ");
    print_array(a, n);
    
    replace_negative_elements(a, n);
    
    printf("Масив після заміни: ");
    print_array(a, n);
    
    return 0;
}
