#include<stdio.h>
#define icyfr 5
main() {
int i, przen, tab[icyfr], tab2[icyfr], wyn[icyfr];
	przen=0;
	for(i=icyfr-1; i>=0; i--){
		printf("kolejna liczba:");
		scanf("%i", &tab[i]);
		}
	for(i=icyfr-1; i>=0; i--){
		printf("kolejna liczba2:");
		scanf("%i", &tab2[i]);
		}
	for(i=0; i<icyfr; i++){
		wyn[i]=tab[i]+tab2[i]+przen;
		przen=wyn[i]/10;
		wyn[i]=wyn[i]%10;
	}
	printf("wynik to:");
	for(i=icyfr-1; i>=0; i--){
		printf("%i", wyn[i]);
	}  
}

