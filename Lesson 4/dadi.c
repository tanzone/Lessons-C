#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado_6, dado_10;
    int giocatore_1 = 0, giocatore_2 = 0;
    int i;

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    // Simula il lancio dei dadi per 10 turni
    for (i = 0; i < 10; i++) {
        dado_6 = rand() % 6 + 1;
        dado_10 = rand() % 10 + 1;

        giocatore_1 += dado_6;
        giocatore_2 += dado_10;

        printf("Turno %d: Giocatore 1 lancia il dado a 6 facce e ottiene %d. Giocatore 2 lancia il dado a 10 facce e ottiene %d.\n", i+1, dado_6, dado_10);
    }

    // Determina il vincitore
    if (giocatore_1 > giocatore_2) {
        printf("\nVince il Giocatore 1 con un punteggio di %d.", giocatore_1);
    } else if (giocatore_2 > giocatore_1) {
        printf("\nVince il Giocatore 2 con un punteggio di %d.", giocatore_2);
    } else {
        printf("\nPareggio!");
    }

    return 0;
}
