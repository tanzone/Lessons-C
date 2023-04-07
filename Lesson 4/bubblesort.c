#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100];
    int i;

    // generazione dei numeri casuali
    srand(time(0));
    for (i = 0; i < 100; i++) {
        arr[i] = rand() % 1000 + 1;
    }

    // stampa l'array non ordinato
    printf("Array non ordinato:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    // ordina l'array
    bubbleSort(arr, 100);

    // stampa l'array ordinato
    printf("\n\nArray ordinato:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
