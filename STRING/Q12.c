//12.Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *token;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, "is") == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("The word 'is' appears %d times.\n", count);
    return 0;
}

