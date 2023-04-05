#include <stdio.h>

int main() {
    int num1, num2, somma;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    somma = num1 + num2;
    printf("La somma dei due numeri è: %d", somma);

    return 0;
}