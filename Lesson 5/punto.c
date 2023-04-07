#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

struct punto {
    int x;
    int y;
};

int main() {
    struct punto arr[SIZE];
    int i, min_idx;
    float min_dist, dist;

    // Inizializza i punti con coordinate casuali
    for (i = 0; i < SIZE; i++) {
        arr[i].x = rand() % 201 - 100; // Coordinate comprese tra -100 e 100
        arr[i].y = rand() % 201 - 100;
    }

    // Calcola la distanza euclidea tra il punto in posizione 0 e tutti gli altri punti
    min_dist = sqrt(pow(arr[0].x - arr[1].x, 2) + pow(arr[0].y - arr[1].y, 2));
    min_idx = 1;
    for (i = 2; i < SIZE; i++) {
        dist = sqrt(pow(arr[0].x - arr[i].x, 2) + pow(arr[0].y - arr[i].y, 2));
        if (dist < min_dist) {
            min_dist = dist;
            min_idx = i;
        }
    }

    // Stampa le coordinate del punto più vicino al punto in posizione 0
    printf("Il punto più vicino al punto in posizione 0 ha coordinate (%d, %d)\n", arr[min_idx].x, arr[min_idx].y);

    return 0;
}
