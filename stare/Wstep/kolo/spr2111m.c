#include<stdio.h>

#define DL_ALFABETU 26

char odszyfr (int s) {
   switch (s) {
       case -1 : return '\n'; break;
       case -2 : return ' '; break;
       case -3 : return '.'; break;
       case -4 : return ','; break;
   }
   if (s<DL_ALFABETU){
     return (char)(s+(int)'a');
   }
   else {
    return (char)(s-26+(int)'A');

   }
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
