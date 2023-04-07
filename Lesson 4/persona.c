#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NAME_LEN 20
#define MAX_AGE 60
#define MIN_AGE 18

struct Persona {
    char nome[MAX_NAME_LEN];
    int eta;
};

int main() {
    struct Persona persone[10];

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Popola l'array di persone con nomi e età casuali
    for (int i = 0; i < 10; i++) {
        // Genera un nome casuale
        char nome[MAX_NAME_LEN];
        for (int j = 0; j < MAX_NAME_LEN - 1; j++) {
            int c = 'a' + rand() % 26;
            nome[j] = c;
        }
        nome[MAX_NAME_LEN - 1] = '\0'; // Aggiunge il terminatore di stringa
        // Inizializza la persona corrente
        strcpy(persone[i].nome, nome);
        persone[i].eta = rand() % (MAX_AGE - MIN_AGE + 1) + MIN_AGE;
    }

    // Stampa i nomi delle persone con un'età maggiore di 30 anni
    for (int i = 0; i < 10; i++) {
        if (persone[i].eta > 30) {
            printf("%s\n", persone[i].nome);
        }
    }

    return 0;
}
