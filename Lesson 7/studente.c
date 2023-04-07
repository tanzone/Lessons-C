#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_COGNOME 50
#define MAX_STUDENTI 100

typedef struct {
    char nome[MAX_NOME];
    char cognome[MAX_COGNOME];
    float media_voti;
} studente;

int main() {
    studente elenco[MAX_STUDENTI];
    int n;
    float media_generale = 0;
    int num_studenti_media_superiore = 0;

    printf("Inserisci il numero di studenti: ");
    scanf("%d", &n);

    // leggi i dati degli studenti
    for (int i = 0; i < n; i++) {
        printf("Inserisci i dati dello studente %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", elenco[i].nome);
        printf("Cognome: ");
        scanf("%s", elenco[i].cognome);
        printf("Media voti: ");
        scanf("%f", &elenco[i].media_voti);
        media_generale += elenco[i].media_voti;
    }

    media_generale /= n;

    printf("\nElenco degli studenti con media dei voti superiore alla media generale:\n");
    for (int i = 0; i < n; i++) {
        if (elenco[i].media_voti > media_generale) {
            printf("%s %s (media voti: %.2f)\n", elenco[i].nome, elenco[i].cognome, elenco[i].media_voti);
            num_studenti_media_superiore++;
        }
    }

    if (num_studenti_media_superiore == 0) {
        printf("Non ci sono studenti con media dei voti superiore alla media generale.\n");
    }

    return 0;
}
