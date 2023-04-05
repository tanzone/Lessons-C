#include <stdio.h>

int factorial(int num) {
    int i, result = 1;

    for (i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    printf("Il fattoriale di %d è: %d", num, factorial(num));

    return 0;
}