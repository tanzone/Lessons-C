#include <stdio.h>

int main() {
    int num, i;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++) {
        printf("%d ", i);
    }

    return 0;
}