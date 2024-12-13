#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 10
#define MAX_M 10

void generateMatrix(int matrix[MAX_N][MAX_M], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = (rand() % 201) - 100;
        }
    }
}

void printMatrix(int matrix[MAX_N][MAX_M], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int findMaxSumColumn(int matrix[MAX_N][MAX_M], int n, int m) {
    int maxSum = 0;
    int maxColumn = 0;
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxColumn = j;
        }
    }
    return maxColumn;
}

void removeColumn(int matrix[MAX_N][MAX_M], int n, int m, int column) {
    for (int i = 0; i < n; i++) {
        for (int j = column; j < m - 1; j++) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }
}

int main() {
    int n, m;

    srand(time(0));

    printf("Введіть кількість рядків (n): ");
    scanf("%d", &n);
    printf("Введіть кількість стовпців (m): ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0 || n > MAX_N || m > MAX_M) {
        printf("Невірні розміри матриці.\n");
        return 1;
    }

    int matrix[MAX_N][MAX_M];
    generateMatrix(matrix, n, m);

    printf("Згенерована матриця:\n");
    printMatrix(matrix, n, m);

    int maxColumn = findMaxSumColumn(matrix, n, m);

    printf("\nСтовпець з найбільшою сумою елементів: %d\n", maxColumn + 1);

    removeColumn(matrix, n, m, maxColumn);

    printf("\nОновлена матриця після вилучення стовпця:\n");
    printMatrix(matrix, n, m - 1);

    return 0;
}
