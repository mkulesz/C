#include<stdio.h>
main(){
 int s=0, i=0, p, j;
 while(i<10){
  p=1;
  j=12;
  while(j>i){
   p=p*j;
   j=j-1;
  }
  s=s+p;
  i=i+1;
 }
 printf("%i", p);
 printf("\n");
} 
