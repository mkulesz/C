#include<stdio.h>
#include<math.h>
#include<helpers.h>

int main()
{
 double x,p;
 x = pobierz_rzeczywista();
 p = sqrt(x);
 printf("Pierwiastek z %f = %f\n" ,x ,p);
 return 0;
}
