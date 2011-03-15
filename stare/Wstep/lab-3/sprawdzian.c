#include<stdio.h>
main () {
int n=0;
int a=0;
int b=100;
while (b!=0) {

n=n+1;
a=a+b;
if (b>0){ 
b=2-b;}

if (b<=0){
b=-3-b;}
}
printf ("%i", a);
}
