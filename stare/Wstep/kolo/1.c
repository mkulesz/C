#include <stdio.h>
#define DL_ALFABETU 26


char odszyfr (int n) {
 return (char)(n+(int)'a');
}




main() {
  int  liczba;
  scanf("%i", &liczba);
  while (liczba >= -4 && liczba < 2*DL_ALFABETU) {
    printf("%c", odszyfr(liczba));
    scanf("%i", &liczba);
  }
  printf("\n");
}
