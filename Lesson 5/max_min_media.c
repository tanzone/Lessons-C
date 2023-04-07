#include <stdio.h>

int main() {
    int numero, minimo, massimo, somma = 0, count = 0;
    float media;
    
    printf("Inserisci una sequenza di numeri interi (termina con 0):\n");
    
    // Leggi i numeri inseriti dall'utente
    scanf("%d", &numero);
    minimo = massimo = numero;
    while(numero != 0) {
        somma += numero;
        count++;
        if(numero < minimo) {
            minimo = numero;
        }
        if(numero > massimo) {
            massimo = numero;
        }
        scanf("%d", &numero);
    }
    
    // Calcola la media (escluso lo 0)
    if(count > 0) {
        media = (float) somma / count;
    } else {
        media = 0.0;
    }
    
    // Stampa i risultati
    printf("Valore massimo: %d, valore minimo: %d, media: %.1f\n", massimo, minimo, media);
    
    return 0;
}
