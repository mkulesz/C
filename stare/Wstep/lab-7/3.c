#include<stdio.h>
#define n=2
#define p=2
#define k=2
main(){
int n,p,k,s,j,i;
 for(i=0; i<n; i++){
  for(j=0; j<k; j++){
   printf("Podaj a[%i][%i]:,i,j);
   scanf("%f",&a[i][j]);
  }
 }
 for(i=0;i<n;i++){
  for(j=0;j<p;j++){
   c[i][j] = 0;
   for(s=0;s<k;s++){
    c[i][j] = c[i][j]+a[i][s]*b[s][j];
   }
  }
 }
printf("%i",c)
}
