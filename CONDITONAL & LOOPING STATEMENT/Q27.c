//1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n, term = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sequence: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term = (i % 2 == 1) ? term * 2 : term * 3;
    }

    printf("\n");
    return 0;
}

