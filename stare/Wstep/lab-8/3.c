
#include<stdio.h>
#include<stdlib.h>

#define DL_ALFABETU 26

void  blad (char komunikat[]) {
  printf("\n!!! BLAD -- %s!!!\n\n", komunikat);
  exit(1);
}

int  numer_litery (char litera) {
    if ('a'<=litera && litera<='z')  return (int)litera - 
(int)'a';
  else
    if ('A'<=litera && litera<='Z')  return (int)litera - 
(int)'A';
    else  return -1;
}

char  litera_o_numerze (int n) {
     if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
  else  blad("zly numer litery");
}

main () {
  char znak, znak2;
  int liczniki[DL_ALFABETU], i2, i, j, x, a[DL_ALFABETU];

   for (i=0; i<DL_ALFABETU; i++)  liczniki[i] = 0;
   a[i]=i;
   
  znak = getchar();
  while (znak != EOF) {
    znak2 = getchar();
    while (znak2 != EOF) {
     i = numer_litery(znak); 
     i2 = numer_litery(znak2);
     if (i>=0 && i2>=0) {
      liczniki[i] = liczniki[i]+1;
     }
    znak = znak2;
    znak2 = getchar();
   }
  }
  for(i=DL_ALFABETU; i>1; i++){
   for(j=1; j<i; j++){
    while(liczniki[DL_ALFABETU]<liczniki[DL_ALFABETU-1]){
    x=liczniki[DL_ALFABETU-1]; 
    liczniki[DL_ALFABETU-1]=liczniki[DL_ALFABETU]; 
    liczniki[DL_ALFABETU]=x;
    }
   } 
  }
  printf("\nSTATYSTYKA:\n");
  for (i=0; i<DL_ALFABETU; i++)
    printf("  %c: %4i\n", litera_o_numerze(a[i]), 
liczniki[i]);
  printf("\n");
}


