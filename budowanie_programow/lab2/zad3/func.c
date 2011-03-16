#include <stdio.h>

int wczytaj_wiek(void)
{
    int n;
    printf("Podaj wiek w latach: ");
    scanf("%i", &n);
    return n;
}

unsigned long long przelicznik(int n)
{
    int i;
    unsigned long long sekund_w_roku, sekund_w_dniu;
    unsigned long long total;
    sekund_w_roku = 365 * n * 24 * 60 * 60;
    sekund_w_dniu = 24 * 60 * 60
    for (i = 1; i <= n; i++){
	if (i%4 == 0 && i%100!=0 || i%400 == 0){
	   total =  sekund_w_roku + sekund_w_dniu;
	}
 	else{
	total =  sekund_w_dniu
    return total;
}
