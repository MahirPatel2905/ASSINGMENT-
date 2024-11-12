//WAP to accept 5 students name and store it in array
#include <stdio.h>

int main() {
    char names[5][30];

    printf("Enter 5 students' names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("The entered names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

