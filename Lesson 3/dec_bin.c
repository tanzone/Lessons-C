#include <stdio.h>

void decToBin(int num) {
    int bin[32], i;

    for (i = 0; num > 0; i++) {
        bin[i] = num % 2;
        num /= 2;
    }

    printf("Il numero binario corrispondente è: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", bin[i]);
    }
}

int main() {
    int num;

    printf("Inserisci un numero decimale: ");
    scanf("%d", &num);

    decToBin(num);

    return 0;
}