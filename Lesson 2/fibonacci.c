#include <stdio.h>

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main() {
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    printf("Il numero di Fibonacci corrispondente a %d è: %d", num, fibonacci(num));

    return 0;
}