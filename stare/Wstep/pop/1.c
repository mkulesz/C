#include<stdio.h>
main(){
int w, z, n, i, t;
printf("Do jakiego n?");
scanf("%i", &n);
printf("Do jakiej potegi n?");
scanf("%i", &z);
printf(" n| ");
for(i=2; i<=z; i++){
 printf(" n^%i| ", i);
}
printf("\n");
for(i=1; i<=z; i++){
 printf("-----");
}
printf("\n");
for(t=0; t<=n; t++){
 printf(" %i|",t);
 w=1;
 for(i=1; i<z; i++){
  w=w*t;
  printf("    %i|", w);
 }
 printf("\n");
}
}
