#include<stdio.h>
int bit_liczby(int n, int k){
 return ((k>>n) & 1);
}
main(){
int n, k; 
printf("Podaj liczbe:\n");scanf("%i", &k);
printf("Podaj numer bitu:\n");scanf("%i", &n);
printf("Dany bit: %i\n", bit_liczby(n, k));
}
