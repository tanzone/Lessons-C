#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_STUDENTI 10
#define MIN_VOTO 18
#define MAX_VOTO 30

struct studente {
    char nome[20];
    char cognome[20];
    int voto;
};

int main() {
    // inizializzazione del generatore di numeri casuali
    srand(time(NULL));
    
    // creazione dell'array di studenti
    struct studente studenti[NUM_STUDENTI];
    for (int i = 0; i < NUM_STUDENTI; i++) {
        // generazione del nome e del cognome casuali
        sprintf(studenti[i].nome, "Studente%d", rand() % 100);
        sprintf(studenti[i].cognome, "Cognome%d", rand() % 100);
        // generazione del voto casuale
        studenti[i].voto = rand() % (MAX_VOTO - MIN_VOTO + 1) + MIN_VOTO;
    }
    
    // ricerca dello studente con il voto più alto
    struct studente *best_studente = &studenti[0];
    for (int i = 1; i < NUM_STUDENTI; i++) {
        if (studenti[i].voto > best_studente->voto) {
            best_studente = &studenti[i];
        }
    }
    
    // stampa del nome e del cognome dello studente con il voto più alto
    printf("Lo studente con il voto più alto è %s %s con il voto %d.\n",
           best_studente->nome, best_studente->cognome, best_studente->voto);
    
    return 0;
}
