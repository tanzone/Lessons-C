#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

struct veicolo {
  char marca[20];
  char modello[20];
  int anno;
};

int main() {
  struct veicolo vet[N];
  int i;

  // Inizializza il generatore di numeri casuali
  srand(time(NULL));

  // Genera gli elementi dell'array
  for(i = 0; i < N; i++) {
    // Genera marca e modello casuali
    sprintf(vet[i].marca, "marca%d", rand()%10);
    sprintf(vet[i].modello, "modello%d", rand()%10);
    // Genera un anno casuale tra il 2000 e il 2022
    vet[i].anno = rand()%(2022-2000+1)+2000;
  }

  // Stampa i marchi dei veicoli prodotti dopo il 2010
  printf("Veicoli prodotti dopo il 2010:\n");
  for(i = 0; i < N; i++) {
    if(vet[i].anno > 2010)
      printf("%s\n", vet[i].marca);
  }

  return 0;
}