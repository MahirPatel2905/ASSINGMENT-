//9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int maxLength = 0, currentLength = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        currentLength++;
        if (str[i] == ' ' || str[i + 1] == '\0') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0; 
        }
        i++;
    }

    printf("Maximum length of characters in a word: %d\n", maxLength);
    return 0;
}

