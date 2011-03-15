#include<stdio.h>
main() {
int n,r;
	scanf("%i", &n);
	while(n>0){
		r=n%16
		if(r<10){
			printf("%i/n",n);
			}
		else{
			if(r=10) printf("A/n"); else
			if(r=11) printf("B/n"); else
			if(r=12) printf("C/n"); else
			if(r=13) printf("D/n"); else
			if(r=14) printf("E/n"); else
			else { printf("F/n")};
		n=n/16;
}
