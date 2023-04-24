#include <stdio.h>

int main() {
    int n, i, max, max_index;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);
    int v[n];
    printf("Inserisci gli elementi del vettore:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        max = v[0];
        max_index = 0;
        for (int j = 1; j < n; j++) {
            if (v[j] > max) {
                max = v[j];
                max_index = j;
            }
        }
        printf("Il massimo è %d e si trova alla posizione %d\n", max, max_index);
        v[max_index] = 0;
    }
    return 0;
}
