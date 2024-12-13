#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;
    char word[] = "олгаритм";
    char result[] = "алгоритм";
    int i = 0;
    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Не вдалося відкрити вхідний файл\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Не вдалося відкрити вихідний файл\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch == word[i]) {
            fputc(result[i], outputFile);
            i++;
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Обробка завершена. Перевірте файл output.txt\n");

    return 0;
}
