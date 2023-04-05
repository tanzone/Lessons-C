Una delle caratteristiche principali di C è la sua forte tipizzazione: ogni variabile ha un tipo specifico, come ad esempio int (intero) o float (floating point), e la tipologia della variabile deve essere definita prima dell'utilizzo. Ciò significa che in C non è possibile assegnare un valore di un tipo a una variabile di un altro tipo.

Per poter lavorare con le variabili in C, è possibile utilizzare dei format specifier. I format specifier sono dei caratteri che consentono di specificare il tipo di dato che si sta utilizzando. Ad esempio, %d viene utilizzato per gli interi, %f per i numeri floating point e %c per i caratteri. Quando si utilizza una funzione di input/output come printf o scanf, è necessario utilizzare il corretto format specifier per ogni variabile.

Ecco alcuni esempi di utilizzo dei format specifier in C:
------------------------------------------------------------------------------------------------
```c
int num = 10;
float f = 3.14;
char c = 'A';
printf("Il valore di num è: %d\n", num); // output: Il valore di num è: 10
printf("Il valore di f è: %f\n", f); // output: Il valore di f è: 3.140000
printf("Il valore di c è: %c\n", c); // output: Il valore di c è: A
```
------------------------------------------------------------------------------------------------

C supporta anche le stringhe di caratteri, che vengono gestite come un array di caratteri. Per definire una stringa in C, è possibile utilizzare la sintassi seguente:
------------------------------------------------------------------------------------------------
```c
char stringa[] = "Questa è una stringa";
```
------------------------------------------------------------------------------------------------

Per manipolare le stringhe in C, esistono delle funzioni apposite come strlen per calcolare la lunghezza della stringa, strcpy per copiare una stringa in un'altra, e strcat per concatenare due stringhe.
Ecco alcuni esempi di utilizzo delle funzioni per le stringhe in C:
------------------------------------------------------------------------------------------------
```c
#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[] = "Questa è una stringa";
    char stringa2[20];
    strcpy(stringa2, "Altra stringa");
    printf("La lunghezza di stringa1 è: %d\n", strlen(stringa1));
    printf("La stringa copiata in stringa2 è: %s\n", stringa2);
    strcat(stringa1, stringa2);
    printf("La stringa concatenata è: %s\n", stringa1);
    return 0;
}
```
------------------------------------------------------------------------------------------------


In C, gli array sono una struttura dati che permette di raggruppare insieme più elementi dello stesso tipo, come ad esempio un array di interi o un array di caratteri. Ogni elemento dell'array è indicizzato da un numero intero, chiamato indice, che inizia da 0 per il primo elemento e aumenta di 1 per ogni successivo elemento.

La sintassi per dichiarare un array in C è la seguente:
------------------------------------------------------------------------------------------------
```
tipo nome_array[dim];
```
dove tipo rappresenta il tipo di dati degli elementi dell'array, nome_array è il nome che viene dato all'array e dim rappresenta la dimensione dell'array.
------------------------------------------------------------------------------------------------

Ecco un esempio di dichiarazione di un array di interi:
------------------------------------------------------------------------------------------------
```c
int numeri[5];
```
In questo caso, numeri è un array di 5 elementi di tipo intero.
------------------------------------------------------------------------------------------------

Per accedere ad un elemento specifico dell'array, si utilizza la seguente sintassi:
------------------------------------------------------------------------------------------------
```c
nome_array[indice];
```
dove nome_array è il nome dell'array e indice rappresenta l'indice dell'elemento a cui si vuole accedere.
------------------------------------------------------------------------------------------------

Ecco un esempio di utilizzo di un array:
------------------------------------------------------------------------------------------------
```c
#include <stdio.h>

int main() {
    int numeri[5] = {1, 2, 3, 4, 5};
    printf("Il primo elemento dell'array è: %d\n", numeri[0]);
    printf("Il terzo elemento dell'array è: %d\n", numeri[2]);
    numeri[4] = 10;
    printf("L'ultimo elemento dell'array è: %d\n", numeri[4]);
    return 0;
}
```
------------------------------------------------------------------------------------------------

In C è anche possibile definire delle matrici, che sono array bidimensionali di elementi dello stesso tipo. La sintassi per dichiarare una matrice in C è la seguente:
------------------------------------------------------------------------------------------------
```c
tipo nome_matrice[dim1][dim2];
```
dove tipo rappresenta il tipo di dati degli elementi della matrice, nome_matrice è il nome che viene dato alla matrice, dim1 rappresenta la dimensione della prima dimensione della matrice e dim2 rappresenta la dimensione della seconda dimensione della matrice.
------------------------------------------------------------------------------------------------


Ecco un esempio di dichiarazione di una matrice di interi:
------------------------------------------------------------------------------------------------
```c
int matrice[3][3];
```
In questo caso, matrice è una matrice di 3x3 elementi di tipo intero.
------------------------------------------------------------------------------------------------

Per accedere ad un elemento specifico della matrice, si utilizza la seguente sintassi:
------------------------------------------------------------------------------------------------
```c
nome_matrice[indice1][indice2];
```
dove nome_matrice è il nome della matrice, indice1 rappresenta l'indice della prima dimensione della matrice e indice2 rappresenta l'indice della seconda dimensione della matrice.
------------------------------------------------------------------------------------------------

Ecco un esempio di utilizzo di una matrice:
------------------------------------------------------------------------------------------------
```c
#include <stdio.h>

int main() {
    int matrice[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Il primo elemento della matrice è: %d\n", matrice[0][0]);
    printf("L'elemento nella seconda riga e terza colonna è: %d\n", matrice[1][2]);
    return 0;
}
```
------------------------------------------------------------------------------------------------


Gli array possono essere inizializzati con dei valori specifici, indicati tra parentesi graffe dopo la dichiarazione dell'array. Ad esempio, l'array di interi numeri definito in precedenza può essere inizializzato nel seguente modo:
------------------------------------------------------------------------------------------------
```c
int numeri[5] = {1, 2, 3, 4, 5};
```
In questo caso, l'array viene inizializzato con i valori 1, 2, 3, 4 e 5.
------------------------------------------------------------------------------------------------


È possibile accedere ad un elemento dell'array utilizzando anche una variabile come indice. Ad esempio:
------------------------------------------------------------------------------------------------
```c
int i = 2;
printf("L'elemento con indice %d è: %d\n", i, numeri[i]);
```
In questo caso, il terzo elemento dell'array (che ha indice 2) viene stampato a video.
------------------------------------------------------------------------------------------------

Le matrici possono essere inizializzate in modo simile agli array, indicando i valori tra parentesi graffe divisi da virgola. Ad esempio:
------------------------------------------------------------------------------------------------
```c
int matrice[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```
In questo caso, la matrice viene inizializzata con i valori 1, 2, 3 nella prima riga, 4, 5, 6 nella seconda riga e 7, 8, 9 nella terza riga.
------------------------------------------------------------------------------------------------

È possibile accedere ad un elemento della matrice utilizzando due variabili come indici. Ad esempio:
------------------------------------------------------------------------------------------------
```c
int riga = 1;
int colonna = 2;
printf("L'elemento nella riga %d e colonna %d è: %d\n", riga, colonna, matrice[riga][colonna]);
```
In questo caso, l'elemento nella seconda riga e terza colonna viene stampato a video.
------------------------------------------------------------------------------------------------

Le matrici possono essere utilizzate per rappresentare matrici bidimensionali, come ad esempio le matrici di adiacenza in grafi. Ad esempio, una matrice di adiacenza per un grafo con 5 nodi potrebbe essere rappresentata in questo modo:
------------------------------------------------------------------------------------------------
```c
int grafo[5][5] = {{0, 1, 0, 0, 1}, {1, 0, 1, 1, 0}, {0, 1, 0, 1, 0}, {0, 1, 1, 0, 1}, {1, 0, 0, 1, 0}};
```
In questo caso, un valore 1 nella cella i,j indica che c'è un arco che va dal nodo i al nodo j, mentre un valore 0 indica che non c'è un arco.
------------------------------------------------------------------------------------------------
