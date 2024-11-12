//15. Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], smallest[50], largest[50];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    str[len] = ' '; 7
    str[len + 1] = '\0';

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(largest) || largest[0] == '\0') {
                strcpy(largest, word);
            }
            if (strlen(word) < strlen(smallest) || smallest[0] == '\0') {
                strcpy(smallest, word);
            }
            j = 0;
        }
    }

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
    return 0;
}

