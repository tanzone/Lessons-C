#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    printf("Il massimo tra %d e %d è: %d", num1, num2, max);

    return 0;
}