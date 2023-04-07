#include <stdio.h>

#define MAX_NUMERI 100

int main() {
    int numeri[MAX_NUMERI];
    int i, n = 0;
    int max, min, somma;
    float media;
    
    while(1) {
        int numero;
        printf("Inserisci un numero intero (inserire un numero negativo per terminare): ");
        scanf("%d", &numero);
        if(numero < 0) {
            break;
        }
        numeri[n] = numero;
        n++;
        if(n >= MAX_NUMERI) {
            printf("Limite massimo di numeri raggiunto (%d numeri)\n", MAX_NUMERI);
            break;
        }
    }
    
    if(n == 0) {
        printf("Non hai inserito alcun numero\n");
        return 0;
    }
    
    max = min = numeri[0];
    somma = numeri[0];
    for(i = 1; i < n; i++) {
        if(numeri[i] > max) {
            max = numeri[i];
        }
        if(numeri[i] < min) {
            min = numeri[i];
        }
        somma += numeri[i];
    }
    
    media = (float)somma / n;
    
    printf("Il massimo numero inserito è: %d\n", max);
    printf("Il minimo numero inserito è: %d\n", min);
    printf("La media dei numeri inseriti è: %0.2f\n", media);
    
    return 0;
}
