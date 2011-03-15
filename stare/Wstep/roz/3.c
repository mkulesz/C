#include<stdio.h>

int  pierw(int n) {
int  x, y, z, t;
x = 0; y = 0; z = 1;
while (n >=z)  z = 4*z;
while (z > 1) {
 y = y/2;  z = z/4;
 t = x+2*y+z;
 if (n >= t) {
  x = t; y = y+z;
 }
     
}
return y;
}

main () {
 int  i, k, p, s;
 printf("\n  Podaj  k : ");

 scanf("%i", &k);
 s = 0;
 printf("\n  ");
 for (i=1; i<=k; i=i+1) {
  if (i == 1)  printf("pierw(1)");
  else  printf(" + pierw(%i)", i);
  s = s+pierw(i);
  }
  printf("  =  %i\n\n", s);
    
}
