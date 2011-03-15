#include<stdio.h>
#include<math.h>

#define szer 50
#define wys 40
#define dol_x -10
#define gora_x 15
#define dol_y -15
#define gora_y 20
#define srodek 3
#define zakres 30
#define skok 0.0001
#define alfa 1


float  funkcja_x (float t) {
  return t * cos(alfa*t);
}

float  funkcja_y (float t) {
 return t * sin(alfa*t);
}


char  rysunek[szer][wys];


void  rysuj(int x, int y, char znak) {
  if (0<=x && x<szer && 0<=y && y<wys)
    rysunek[x][y] = znak;
}


int  interpoluj (float x, float a, float b, int n) {
  return  floor((x-a)*n/(b-a));
}


int  f_x (float t) {
  return  interpoluj(funkcja_x(t) , dol_x, gora_x, szer);
}

int  f_y (float t) {
  return  interpoluj(funkcja_y(t) , dol_y, gora_y, wys);
}


main () {
  int  x,y, poziom, pion;
  float t;

  printf("\nWYKRES FUNKCJI:\n\n ");

  for (x=0; x<szer; x=x+1)
    for (y=0; y<wys; y=y+1)
      rysuj(x, y, ' ');

  pion = interpoluj(0, dol_x, gora_x, szer);
  for(y=0; y<wys; y=y+1)
    rysuj(pion, y, '|');

  poziom = interpoluj(0, dol_y, gora_y, wys);
  for(x=0; x<szer; x=x+1)
    rysuj(x, poziom, '-');

  rysuj(pion, poziom, '+');

  for (t=srodek; t<zakres; t=t+skok)
    rysuj(f_x(t), f_y(t), '*');

  for (y=wys-1; y>=0; y=y-1) {
    for (x=0; x<szer; x=x+1)
      printf("%c", rysunek[x][y]);
    printf("\n ");
  }

  printf("\n\n");
}


