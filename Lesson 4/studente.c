#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char nome[30];
    float voto;
    int classe;
} Studente;

int main() {
    int numStudenti, i, j;
    float mediaClasse[MAX_STUDENTS] = {0};
    Studente studenti[MAX_STUDENTS];

    printf("Inserisci il numero di studenti da registrare: ");
    scanf("%d", &numStudenti);

    // acquisizione dati studenti
    for (i = 0; i < numStudenti; i++) {
        printf("\nInserisci il nome dello studente %d: ", i + 1);
        scanf("%s", studenti[i].nome);

        printf("Inserisci il voto di %s: ", studenti[i].nome);
        scanf("%f", &studenti[i].voto);

        printf("Inserisci la classe di %s: ", studenti[i].nome);
        scanf("%d", &studenti[i].classe);

        // calcolo somma voti per classe
        mediaClasse[studenti[i].classe] += studenti[i].voto;
    }

    // stampa dati studenti
    printf("\nDati degli studenti:\n");
    for (i = 0; i < numStudenti; i++) {
        printf("- Nome: %s\n", studenti[i].nome);
        printf("  Voto: %.2f\n", studenti[i].voto);
        printf("  Classe: %d\n", studenti[i].classe);
    }

    // calcolo media voti per classe
    printf("\nMedia voti
