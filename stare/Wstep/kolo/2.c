#include<stdio.h>

#define DL_ALFABETU 26
  
char odszyfr (int n) {
  char litera;
  if (n>=0 && n<26) {
  litera = (n+(int)'a');
  }
  else if (n>=-4 && n<0) {
  litera = (n-26+(int)'A'); }
  else if (n=='-4') { litera = ","; }
  else if (n=='-3') { litera = "."; }
  else if (n=='-2') { litera = " "; }
  else if (n=="-1") { litera = "\n"; }
  return litera;
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
