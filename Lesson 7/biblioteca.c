#include <stdio.h>
#include <string.h>

// Numero massimo di libri nella biblioteca
#define MAX_LIBRI 10

// Struttura libro
typedef struct {
    char titolo[50];
    char autore[50];
} Libro;

// Funzione di ricerca per titolo
void ricerca_per_titolo(Libro biblioteca[], int num_libri, char titolo[]) {
    int i;
    printf("Risultati della ricerca per titolo \"%s\":\n", titolo);
    for (i = 0; i < num_libri; i++) {
        if (strcmp(biblioteca[i].titolo, titolo) == 0) {
            printf("- %s di %s\n", biblioteca[i].titolo, biblioteca[i].autore);
        }
    }
}

// Funzione di ricerca per autore
void ricerca_per_autore(Libro biblioteca[], int num_libri, char autore[]) {
    int i;
    printf("Risultati della ricerca per autore \"%s\":\n", autore);
    for (i = 0; i < num_libri; i++) {
        if (strcmp(biblioteca[i].autore, autore) == 0) {
            printf("- %s di %s\n", biblioteca[i].titolo, biblioteca[i].autore);
        }
    }
}

int main() {
    int i, scelta;
    char ricerca[50];
    Libro biblioteca[MAX_LIBRI] = {
        {"Il nome della rosa", "Umberto Eco"},
        {"L'isola del tesoro", "Robert Louis Stevenson"},
        {"Il signore degli anelli", "J.R.R. Tolkien"},
        {"1984", "George Orwell"},
        {"Cime tempestose", "Emily Bronte"},
        {"Anna Karenina", "Lev Tolstoj"},
        {"Moby Dick", "Herman Melville"},
        {"Don Chisciotte", "Miguel de Cervantes"},
        {"La divina commedia", "Dante Alighieri"},
        {"I promessi sposi", "Alessandro Manzoni"}
    };
    int num_libri = 10;

    printf("Benvenuto nella biblioteca!\n");
    while (1) {
        printf("\nCosa vuoi fare?\n");
        printf("1) Cerca un libro per titolo\n");
        printf("2) Cerca un libro per autore\n");
        printf("3) Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        switch (scelta) {
            case 1:
                printf("Inserisci il titolo da cercare: ");
                scanf("%s", ricerca);
                ricerca_per_titolo(biblioteca, num_libri, ricerca);
                break;
            case 2:
                printf("Inserisci l'autore da cercare: ");
                scanf("%s", ricerca);
                ricerca_per_autore(biblioteca, num_libri, ricerca);
                break;
            case 3:
                printf("Arrivederci!\n");
                return 0;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    }

    return
