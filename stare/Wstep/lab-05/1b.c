#include<stdio.h>
main() {
int n, i, licznik_d, licznik_z, licznik_u;
float x;
	printf("ile liczb?");
	scanf("%i", &n);
	licznik_u=0; licznik_d=0; licznik_z=0;
		for(i=0; i<n; i++)
			{
			printf("%i-a liczba:", i);
			scanf("%f". &x);
			if(x<0) { licznik_u=++}; else{};
			if(x>0) {licznik_d=++};
			else{ licznik_z=++};
			}
	printf("\n ujemnych: %i; dodatnich: %i; zer:%i", licznik_u, licznik_d, 
licznik _z);
}
