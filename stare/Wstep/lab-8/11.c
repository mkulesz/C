#include<stdio.h>
#include<stdlib.h>

#define DL_ALFABETU 26

void  blad (char komunikat[]) {
  printf("\n!!! BLAD -- %s!!!\n\n", komunikat);
  exit(1);
}

int  numer_litery (char litera) {
  if ('a'<=litera && litera<='z')  return (int)litera - (int)'a';
  else
    if ('A'<=litera && litera<='Z')  return (int)litera - (int)'A';
    else  return -1;
}

char  litera_o_numerze (int n) {
  if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
  else  blad("zly numer litery");
}

main () {
  char znak1, znak2;
  int liczniki[DL_ALFABETU][DL_ALFABETU], i,i1,  i2;

  for (i1=0; i1<DL_ALFABETU; i1++) {
    for (i2=0; i2<DL_ALFABETU; i2++) {
   liczniki[i1][i2] = 0;
  
  znak1 = getchar();
  if (znak1 != EOF) {
   znak2 = getchar();
   while (znak2 !=EOF) {
    i1 = numer_litery(znak1);
    i2 = numer_litery(znak2);
    if (i1>=0 && i2>=0) {
     liczniki[i1][i2] = liczniki[i1][i2]+1;
    }
    znak1 = znak2;
    znak2 = getchar();
   }
  }
  
  
  printf("\nSTATYSTYKA:\n");
  for (i1=0; i1<DL_ALFABETU; i1++) {
   for (i2=0; i2<DL_ALFABETU; i2++) {
    printf(" %c%c: %4i\n",litera_o_numerze(i1), litera_o_numerze(i2), liczniki[i1][i2]);
   }
  printf("\n");
  }
}
}
}
