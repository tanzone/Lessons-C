#include <stdio.h>
#include <math.h>

double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double base, result;
    int exponent;

    printf("Inserisci la base: ");
    scanf("%lf", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf elevato alla %d è: %.2lf", base, exponent, result);

    return 0;
}