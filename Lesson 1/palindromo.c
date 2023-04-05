#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[]) {
    int i, len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[100];

    printf("Inserisci una stringa: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s è una stringa palindroma", str);
    } else {
        printf("%s non è una stringa palindroma", str);
    }

    return 0;
}