#include<stdio.h>
main(){
 int  i, t[10], suma, n;
 for(i=0; i<10; i++) {
  scanf("%i", &t[i]);
  }
 suma=0;
 for(i=0; i<10; i++) {
  suma=suma+t[i];
  }
 printf("%i", suma);
 }
