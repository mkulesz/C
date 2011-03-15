#include<stdio.h>
main() {
int wiersz, kolumna, liczba, i;
	
	for (wiersz=0; wiersz <=9; wiersz=wiersz+1) {
	liczba=0;
		for (kolumna=0; kolumna<=9; kolumna=kolumna+1){
		printf(" %2i", liczba); liczba=liczba+wiersz;
	
	}
	printf ("\n");
}
}
