#include<stdio.h>
main(){
int d,f,w;
d=0; w=0;
scanf("%i", &d);
for(f=0; f<=d; f++){
 w=f+w;
}
printf("%i",w);
}
