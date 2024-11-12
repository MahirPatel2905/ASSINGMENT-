//4. Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            words++;
        }
        i++;
    }

    printf("Total number of words: %d\n", words);
    return 0;
}


