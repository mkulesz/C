#include <stdio.h>
#include "func.h"

int main()
{
    int n;
    n = wczytaj_wiek();

/*
Wyswietlenie wyniku w sekundach
*/
    printf("\nTwoj wiek w sekundach wynosi: %Lu\n", przelicznik(n));

    return 0;
}
