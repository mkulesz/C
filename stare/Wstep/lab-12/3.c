#include<stdio.h>
int bit_liczby(int n, int k){
 return ((k>>n) & 1);
}
main(){
int  k, i ,j;; 
printf("Podaj liczbe:\n");scanf("%i", &k);
for(i=3; i>=0; i--){
 for(j=7; j>=0; j--){
  printf("%i", bit_liczby(i*8+j, k));
 }
printf(" "); 
}
}
