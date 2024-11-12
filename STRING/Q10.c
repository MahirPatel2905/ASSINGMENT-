//10.Write a program in C to extract a substring from a given string
#include <stdio.h>

void substring(char str[], int start, int length) {
    char sub[100];
    int i;

    for (i = 0; i < length; i++) {
        sub[i] = str[start + i];
    }
    sub[i] = '\0';

    printf("Extracted substring: %s\n", sub);
}

int main() {
    char str[100];
    int start, length;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the starting position and length of substring: ");
    scanf("%d %d", &start, &length);

    substring(str, start, length);

    return 0;
}

