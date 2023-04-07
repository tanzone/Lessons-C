#include <stdio.h>

int main() {
    float voto, somma = 0.0, media;
    int n, i;
    
    printf("Inserisci il numero di studenti: ");
    scanf("%d", &n);
    
    // Chiedi all'utente di inserire i voti di ogni studente
    for(i = 0; i < n; i++) {
        printf("Inserisci il voto dello studente %d: ", i + 1);
        scanf("%f", &voto);
        somma += voto;
    }
    
    // Calcola la media dei voti
    media = somma / n;
    
    // Stampa il risultato
    printf("La media dei voti degli studenti e' %.2f\n", media);
    
    return 0;
}
