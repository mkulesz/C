#include <stdio.h>
#include <stdlib.h>

int pierwsza(int n)
{
  int i = 2;
  while (n%i!=0 && i*i<=n)
   i++;             
  if (i*i<=n)
   return 0;
  else
  return 1;  
}


int suma(int n)
{
   int sum=0, i;
   for (i=1;i<=n;i++)
   {
     if ((n%i)==0)
     {    
       sum=sum+i;
     }
   }  
   return sum;
}

int main()
{
  int n=0, j;  
  printf("Wprowadz n :");
  scanf("%d", &n);
  for (j=1;j<=n;j++)
  {
    if (pierwsza(suma(j)))
    {
      printf("k = %d", j);
    }  
  }  
getchar();
return 0;
}
