#include<stdio.h>

float det(int n, float tab[n][n]){
 if(n==1) return tab[0][0];
 else{
  float s, m[n-1][n-1];
  int i, z;
  s=0;
  z=-1;
  for(i=n-1; i>=0; i--) {
   int a, b;
   for(a=0; a<i; a++) {
    for(b=0; b<i; b++) m[a][b] = tab[a][b];
    for(b=i; b<n-1; b++) m[a][b] = tab[a][b+1];
   }
  s=s+z*tab[n-1][i]*det(n-1, m);
  }
 return s;
 }
}
main(){
 int  rozmiar, i, j;
  printf("\n  Rozmiar macierzy == "); scanf("%i", &rozmiar);
  float mac[rozmiar][rozmiar];
  printf("\n  Wyrazy macierzy:\n");
  for (i=0; i<rozmiar; i=i+1) {
    printf("   wiersz %i: ", i);
    for (j=0; j<rozmiar; j=j+1)  scanf("%f", &mac[i][j]);
  }
  printf("\n  Wyznacznik wynosi  %f\n\n", det(rozmiar, mac));
}


