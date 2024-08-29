#include <stdio.h>
#include <stdlib.h>

int is_delimiter(char c, char *delimiters) {
    int i = 0;
    while (delimiters[i] != '\0') {
        if (c == delimiters[i])
            return 1;
        i++;
    }
    return 0;
}

char *mystrtok(char *s, char *delimiters) {
    static char *input = NULL;
    if (s != NULL)
        input = s;

    if (input == NULL)
        return NULL;

    char *result = (char *)malloc(50);
    int i = 0;

    for (; input[i] != '\0'; i++) {
        if (!is_delimiter(input[i], delimiters))
            result[i] = input[i];
        else {
            result[i] = '\0';
            input = input + i + 1;

            // Find the position of the next non-delimiter character
            while (is_delimiter(input[0], delimiters))
                input++;

            return result;
        }
    }

    result[i] = '\0';
    input = NULL;
    return result;
}

int main() {
    char str[90];
    char delimiters[10];

    // Input text from user
    printf("Enter the text: ");
    gets(str);

    // Input delimiters from user
    printf("Enter the delimiters (separated by spaces): ");
    gets( delimiters);

    char *ptr = mystrtok(str, delimiters);

    printf("%s\n", ptr);

    while (ptr != NULL) {
        free(ptr); // Free memory allocated by mystrtok
        ptr = mystrtok(NULL, delimiters);
        printf("%s\n", ptr);
    }
    return 0;
}
