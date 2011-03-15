#include<stdio.h>
#define ILE 4

main () {
  float tab[ILE], x;  int j, k, n, m;
  printf("\nSORTOWANIE PRZEZ WSTAWIENIE");
  printf("\nPodaj %i liczb rzeczywistych: ", ILE);
  for (k=0; k<ILE; k=k+1){
    scanf("%f", &tab[k]);
  }
  n=ILE;
  for(k=1; k<ILE; k++){
   j=k;
    while(tab[j] < tab[j-1] && j>0){
     x=tab[j-1]; tab[j-1]=tab[j]; tab[j]=x;
     j=j-1;
    }
  }
  
  printf("\nWynik sortowania:\n");
  for (k=0; k<ILE; k=k+1)
    printf("  %f\n", tab[k]);
  printf("\n");
}

