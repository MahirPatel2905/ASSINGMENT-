//14.Write a program in C to combine two strings manually
 
#include <stdio.h>

void combineStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    combineStrings(str1, str2);

    printf("Combined string: %s\n", str1);
    return 0;
}

