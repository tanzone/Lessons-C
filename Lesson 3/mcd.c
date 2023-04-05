#include <stdio.h>

int mcd(int a, int b) {
    int mcd;

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    mcd = a;

    return mcd;
}

int main() {
    int a, b;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("L'MCD di %d e %d è: %d", a, b, mcd(a, b));

    return 0;
}