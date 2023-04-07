#include <stdio.h>

int main() {
    int n, i=1, quadrato=1;
    
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);
    
    while (quadrato < n) {
        i++;
        quadrato = i*i;
    }
    
    if (quadrato == n) {
        printf("Il numero inserito è un quadrato perfetto\n");
    } else {
        printf("Il numero inserito non è un quadrato perfetto\n");
    }
    
    return 0;
}
