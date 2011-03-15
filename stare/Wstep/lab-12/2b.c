#include<stdio.h>
int bit_liczby(int n, int k){
 if(k&n==0)
 return 0;
 else return 1;
}
main(){
int n, k; 
printf("Podaj liczbe:\n");scanf("%i", &k);
printf("Podaj numer bitu:\n");scanf("%i", &n);
printf("Dany bit: %i\n", bit_liczby(n, k));
}
