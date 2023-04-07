#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Stampa gli spazi
        for (j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        // Stampa gli asterischi
        for (k = 0; k < i*2+1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
