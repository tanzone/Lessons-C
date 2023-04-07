#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct studente {
    int matricola;
    char nome[50];
    char cognome[50];
    int anno_nascita;
};

int main() {
    srand(time(NULL)); // Inizializza il generatore di numeri casuali
    struct studente studenti[10]; // Dichiarazione dell'array di studenti
    int i;

    // Popolamento dell'array di studenti con dati casuali
    for (i = 0; i < 10; i++) {
        studenti[i].matricola = rand() % 100000 + 10000; // Genera una matricola casuale composta da 5 cifre
        sprintf(studenti[i].nome, "Nome%d", i+1); // Genera un nome casuale
        sprintf(studenti[i].cognome, "Cognome%d", i+1); // Genera un cognome casuale
        studenti[i].anno_nascita = rand() % 10 + 1990; // Genera un anno di nascita casuale tra il 1990 e il 1999
    }

    // Stampa a video i dati degli studenti
    for (i = 0; i < 10; i++) {
        printf("Studente %d:\n", i+1);
        printf("Matricola: %d\n", studenti[i].matricola);
        printf("Nome: %s\n", studenti[i].nome);
        printf("Cognome: %s\n", studenti[i].cognome);
        printf("Anno di nascita: %d\n\n", studenti[i].anno_nascita);
    }

    return 0;
}
