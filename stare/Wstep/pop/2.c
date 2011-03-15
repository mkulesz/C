#include<stdio.h>
main(){
int n, k, s, d;
printf("Ile wierszy?");
scanf("%i", &n);
printf("Ile kolumn?");
scanf("%i", &k);
float l[n][k];
for(s=0; s<n; s++){
 for(d=0; d<k; d++){
  scanf("%f", &l[s][d]);
 }
}
printf(" liczba| wiersz| kolumna \n");
printf("------------------------ ");
printf("\n");
for(s=0; s<n; s++){
 for(d=0; d<k; d++){
  if(l[s][d]<=0,5 && l[s][d]>=-0,5){
   printf("%f|     %i|    %i \n", l[s][d], s, d);
  }
 }
}
}
