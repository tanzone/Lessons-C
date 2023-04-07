#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char stringa[MAX_LENGTH+1];  // +1 per il carattere terminatore
    int i, count_a = 0;
    
    printf("Inserisci una stringa: ");
    fgets(stringa, sizeof(stringa), stdin);
    
    // Conta il numero di occorrenze della lettera 'a'
    for(i = 0; i < strlen(stringa); i++) {
        if(stringa[i] == 'a' || stringa[i] == 'A') {
            count_a++;
        }
    }
    
    printf("La lettera 'a' compare %d volte nella stringa\n", count_a);
    
    return 0;
}
