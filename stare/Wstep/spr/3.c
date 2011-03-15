#include<stdio.h>
main(){
 int  i, t[i], suma, n ;
 printf("podaj dlugosc tablicy");
 scanf("%i", &n);
 for(i=0; i<n; i++) {
  scanf("%i", &t[i]);
  }
 suma=0;
 for(i=0; i<n; i++) {
  suma=suma+t[i];
  }
 printf("%i", suma);
 }
