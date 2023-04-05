#include <stdio.h>

int main() {
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Il numero è positivo");
    } else if (num < 0) {
        printf("Il numero è negativo");
    } else {
        printf("Il numero è zero");
    }

    return 0;
}