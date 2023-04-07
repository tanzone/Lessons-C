#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void bubbleSort(int arr[], int n);

int main() {
    int arr[N];
    int i;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera l'array di numeri casuali
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100; // Numeri casuali tra 0 e 99
    }

    printf("Array non ordinato:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, N);

    printf("Array ordinato:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Scambia gli elementi
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
