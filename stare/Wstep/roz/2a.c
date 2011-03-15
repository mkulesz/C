#include<stdio.h>

main(){
int liczba,reszta;
printf("\n podaj liczbe: ");
scanf("%i",&liczba);
printf("\n liczba=");
while(liczba!=0){
 reszta=liczba%16;
 if (reszta>=10 && reszta<16)
       {if (reszta==10)
       printf("A");
       if (reszta==11)
       printf("B");
       if (reszta==12)
       printf("C");
       if (reszta==13)
       printf("D");
       if (reszta==14)
       printf("E");
       if (reszta==15)
       printf("F");}
 else{
 printf("%i", reszta);
 }
 liczba=liczba/16;
}
puts("\n");
return 0;
}
