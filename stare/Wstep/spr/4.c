#include<stdio.h>
#include<stdlib.h>

int qq(int n, int k)
{
 if(n==0){
  return 0;
 }
 else{
  int s=0, i;
  for(i=1; i<=k; i++){
   s=s+i*i;
  }
 return qq(n-1,k)+s;
}
}
main(){
int n, k, w;
printf("Podaj n i k:");
scanf("%i", &n);
scanf("%i", &k);
if(k>=0 && n>k && n>=0){
w=qq(n,k);
printf("%i \n:", w);
}
else{
printf("bledne dane");
}
}
