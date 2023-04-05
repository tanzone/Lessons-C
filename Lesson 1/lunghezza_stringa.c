#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    printf("La lunghezza della stringa è: %ld", strlen(str));

    return 0;
}