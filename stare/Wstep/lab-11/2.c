#include<stdio.h>

float det(int n, float tab[n][n]){
 if(n==1) return tab[0][0];
 else{
  float s, m[n-1][n-1];
  int i, z;
  s=0;
  z=1;
  for(i=n-1; i>=0; i--) {
   int a, b;
   for(a=0; a<n-1; a++) {
    for(b=0; b<i; b++) m[a][b] = tab[a][b];
    for(b=i; b<n-1; b++) m[a][b] = tab[a][b+1];
   }
  s=s + z*tab[n-1][i]*det(n-1, m);
  z=-z;
  }
 return s;
 }
}
main(){
 int r, i, j;
 printf("Rozmiar macierzy =");  scanf("%i", &r);
 float tab[r][r];
 for(i=0; i<r; i++){
 printf("wiersz %i: ", i);
  for(j=0; j<r; j++){
   scanf("%f", &tab[i][j]);
  }
 }
 printf("Wyznacznik wynosi: %f\n", det(r, tab));
}

