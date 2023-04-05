#include <stdio.h>

int findMax(int arr[], int n) {
    int i, max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[10], i, max;

    printf("Inserisci 10 numeri:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = findMax(arr, 10);

    printf("Il massimo valore nell'array è: %d", max);

    return 0;
}