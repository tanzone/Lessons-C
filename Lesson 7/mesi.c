#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char* months[] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};
    srand(time(0));
    int month_index = rand() % 12;
    printf("Il mese corrispondente al numero generato è: %s\n", months[month_index]);
    return 0;
}
