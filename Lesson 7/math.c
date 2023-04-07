#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    int doppio = num * 2;
    int quadrato = num * num;
    double radice_quadrata = sqrt(num);
    int valore_assoluto = abs(num);
    int valore_intero_inferiore = floor(num);

    printf("Doppio: %d\n", doppio);
    printf("Quadrato: %d\n", quadrato);
    printf("Radice quadrata: %f\n", radice_quadrata);
    printf("Valore assoluto: %d\n", valore_assoluto);
    printf("Valore intero inferiore: %d\n", valore_intero_inferiore);

    return 0;
}
