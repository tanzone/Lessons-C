#include <stdio.h>
#include <stdbool.h>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d è un numero pari", num);
    } else {
        printf("%d è un numero dispari", num);
    }

    return 0;
}
