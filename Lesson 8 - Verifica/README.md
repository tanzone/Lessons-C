# Esercizi di programmazione in C

In questo repository sono presenti alcuni esercizi di programmazione in C. Ogni esercizio è stato implementato in un file separato, con un nome descrittivo del contenuto. Di seguito è presente una breve descrizione di ogni esercizio.

## Esercizi

41. `biblioteca.c`: Scrivi un programma che gestisca un archivio di persone, salvando per ciascuna persona il nome, il cognome, l'età e l'indirizzo. In particolare, il programma deve:<br>permettere all'utente di inserire una persona nell'archivio, inserendo i dati relativi alla persona (nome, cognome, età e indirizzo) da tastiera;
<br>visualizzare l'archivio completo, stampando a schermo i dati relativi a tutte le persone presenti nell'archivio;
<br>permettere all'utente di cercare una persona nell'archivio per nome, cognome o indirizzo;
<br>permettere all'utente di eliminare una persona dall'archivio, cercandola per nome, cognome o indirizzo.
<br><br>Il programma deve essere in grado di gestire un numero variabile di persone (almeno 10) e deve essere implementato utilizzando una struttura per rappresentare una persona.

42. `max_zero.c`: Dato un vettore di dimensione N (N e valori vettore  entrambi inseriti dall’utente) trovare il massimo, stamparne la posizione e sostituirlo con zero; trovare il successivo massimo stamparne la posizione e sostituirlo con zero, e così via fino a quando tutti gli elementi del vettore risulteranno nulli.

43. `studenti.c`: Sono dati due array (riempiti con dati inseriti dall’utente), uno contenente le matricole (numeri) di studenti, un altro la lingua straniera scelta dagli studenti (‘I’ per inglese, ‘F’ per Francese, ‘T’ per tedesco). Riempire (copiare) un terzo array(“vetInglese”) con le sole matricole degli studenti che hanno scelto di studiare inglese. 
Stampare il vettore riempito (“vetInglese”) in ordine decresente.
vetMatricole vetLingua vetInglese stampa a video ->
10098 ‘I’    10098       66
00021 ‘T’    11111       10098
11111 ‘I’    66          11111
1010 ‘F’     …. ….
