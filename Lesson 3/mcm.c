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

int mcm(int a, int b) {
    int mcm;

    mcm = (a * b) / mcd(a, b);

    return mcm;
}

int main() {
    int a, b;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    printf("L'MCM di %d e %d è: %d", a, b, mcm(a, b));

    return 0;
}