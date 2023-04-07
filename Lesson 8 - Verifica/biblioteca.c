#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definizione della struttura dati del libro
typedef struct {
    char titolo[50];
    char autore[50];
    int anno_pubblicazione;
} Libro;

// definizione della struttura dati della biblioteca
typedef struct {
    Libro libri[100];
    int num_libri;
} Biblioteca;

// funzione per inizializzare una biblioteca vuota
void inizializza_biblioteca(Biblioteca *biblioteca) {
    biblioteca->num_libri = 0;
}

// funzione per aggiungere un libro alla biblioteca
void aggiungi_libro(Biblioteca *biblioteca, Libro libro) {
    biblioteca->libri[biblioteca->num_libri] = libro;
    biblioteca->num_libri++;
}

// funzione per stampare la lista dei libri presenti nella biblioteca
void stampa_lista_libri(Biblioteca biblioteca) {
    printf("Elenco libri nella biblioteca:\n");
    for (int i = 0; i < biblioteca.num_libri; i++) {
        printf("%d. %s - %s (%d)\n", i+1, biblioteca.libri[i].titolo, biblioteca.libri[i].autore, biblioteca.libri[i].anno_pubblicazione);
    }
}

int main() {
    // inizializzazione della generazione casuale dei numeri
    srand(time(NULL));
    
    // inizializzazione della biblioteca
    Biblioteca biblioteca;
    inizializza_biblioteca(&biblioteca);
    
    // aggiunta di 5 libri casuali alla biblioteca
    for (int i = 0; i < 5; i++) {
        Libro libro;
        sprintf(libro.titolo, "Titolo %d", i+1);
        sprintf(libro.autore, "Autore %d", rand() % 5 + 1);
        libro.anno_pubblicazione = rand() % 50 + 1950;
        aggiungi_libro(&biblioteca, libro);
    }
    
    // stampa della lista dei libri presenti nella biblioteca
    stampa_lista_libri(biblioteca);
    
    return 0;
}
