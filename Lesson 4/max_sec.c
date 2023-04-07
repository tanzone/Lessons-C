#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, largest, second_largest;

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    // Genera e stampa l'array di numeri casuali
    printf("Array generato:\n");
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    // Trova il valore più grande e il secondo più grande
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (i = 2; i < SIZE; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Stampa il secondo valore più grande
    printf("\nIl secondo valore piu' grande nell'array e': %d", second_largest);

    return 0;
}