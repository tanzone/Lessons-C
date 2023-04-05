#include <stdio.h>

int sumArray(int arr[], int size) {
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("La somma degli elementi dell'array è: %d", sumArray(arr, size));

    return 0;
}
