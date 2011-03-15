#include<stdio.h>
main() {
int a[1000],n,i,ilosc;
ilosc=0;
                while(ilosc<1000 && n>=0){
		scanf("%i", &n);
                a[ilosc]=n;
                ilosc=ilosc+1;
                }
        for(i=ilosc-1; i>=0; i=i-1){
        printf("%i ", a[i]); 
        }
}











