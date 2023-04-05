#include <stdio.h>

void sortArray(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Array prima dell'ordinamento: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    sortArray(arr, size);

    printf("\nArray dopo l'ordinamento: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
