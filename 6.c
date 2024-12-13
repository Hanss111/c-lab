#include <stdio.h>
#include <limits.h>  

int main() {
    int n = 3, m = 4;  
    int A[3][4] = {{3, -2, 4, 9}, {0, 3, 10, 3}, {5, -4, -6, 0}};
    
    int max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }

    double avg = (max + min) / 2.0;

    printf("Середнє арифметичне максимального та мінімального елементів матриці: %.2f\n", avg);
    
    return 0;
}
