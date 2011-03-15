#include<stdio.h>
main(){
int d,f,w;
w=0;
scanf("%i",&f);
if(f<2){
 printf("za mala liczba");
}
else{
 for(d=0;d<=f;d++){
  w=d*d+w;
 }
printf("%i",w);
}
}
