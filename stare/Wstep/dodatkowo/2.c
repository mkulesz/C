#include<stdio.h>
main(){
int i=0, b;
printf("dlugosc tablicy:");
scanf("%i", &b);
int a[b];
for(i=0; i<b; i++){
 scanf("%i", &a[i]);
}
for(i=b-1; i>=0; i--){
 printf("%i ", a[i]);
}
printf("\n");
}
