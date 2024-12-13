#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_after_colon(char* str) {
    char* colon = strchr(str, ':');
    if (colon != NULL) {
        printf("Текст після першого символу ':': %s\n", colon + 1);
    }
}

int count_sentences_with_odd_words(char* str) {
    int sentence_count = 0;
    int word_count = 0;
    int in_word = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i]) || str[i] == '.' || str[i] == '!' || str[i] == '?') {
            if (in_word) {
                word_count++;
                in_word = 0;
            }
            if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
                if (word_count % 2 != 0) {
                    sentence_count++;
                }
                word_count = 0;
            }
        } else {
            in_word = 1;
        }
    }
    return sentence_count;
}

int main() {
    char str[1000];
    
    printf("Введіть рядок: ");
    fgets(str, sizeof(str), stdin);

    print_after_colon(str);

    int sentence_count = count_sentences_with_odd_words(str);
    printf("Кількість речень з непарною кількістю слів: %d\n", sentence_count);

    return 0;
}
