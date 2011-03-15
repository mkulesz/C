#include<stdio.h>
main() 
{
	int n,i;
	float suma, a[n], b[n];
	printf("podaj dlugosc tablicy:");
	scanf("%i", &n);
	printf("pierwsza tablica");
	for(i=0; i<n; i++);
		{
		printf("a[%i]==",i);
		scanf("%f", &a[i]);
		}
	for(i=0; i<n; i++);
		{
		printf("b[%i]==",i);
		scanf("%f", &b[i]);
		}
	suma=0
	for(i=0; i<n; i++);
		{
		suma=suma+a[i]*b[i];
		printf("\n iloczyn skalarny: %f\n\n", suma);
		}
	}
}
