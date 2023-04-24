#include <stdio.h>

int main() {
    int n, i, j, inglese_count = 0;
    printf("Inserisci la dimensione dei vettori: ");
    scanf("%d", &n);
    int matricole[n];
    char lingua[n];
    int vetInglese[n];
    printf("Inserisci le matricole degli studenti:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &matricole[i]);
    }
    printf("Inserisci la lingua straniera scelta dagli studenti (I/F/T):\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &lingua[i]);
        if (lingua[i] == 'I') {
            vetInglese[inglese_count] = matricole[i];
            inglese_count++;
        }
    }
    printf("Il vettore vetInglese contiene le seguenti matricole:\n");
    for (i = 0; i < inglese_count; i++) {
        for (j = i + 1; j < inglese_count; j++) {
            if (vetInglese[i] < vetInglese[j]) {
                int temp = vetInglese[i];
                vetInglese[i] = vetInglese[j];
                vetInglese[j] = temp;
            }
        }
        printf("%d\n", vetInglese[i]);
    }
    return 0;
}
