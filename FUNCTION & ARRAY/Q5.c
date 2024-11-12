//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

void sortArray(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr1[5], arr2[5], choice;
    
    printf("Enter 5 numbers for array 1:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 numbers for array 2:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for Ascending or 0 for Descending sort: ");
    scanf("%d", &choice);

    sortArray(arr1, 5, choice);
    sortArray(arr2, 5, choice);

    printf("Sorted Array 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSorted Array 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

