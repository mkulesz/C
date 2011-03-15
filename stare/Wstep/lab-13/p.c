#include<stdio.h>
#include<string.h>
#define DA 11
#define DB 17
#define ILE 10000


main(){
char a[ILE][DA],b[ILE][DB];
int c[ILE];
int i,j;

for (i=0; i<ILE; i++){
  scanf("%s", a[i]);
  scanf("%s", b[i]);
  scanf("%i", &c[i]);
}

/* int strlen(char a[i]); dlugosc
int strcmp(char a[i], char b[i]); porownanie 
int strcpy(char a[i], char b[i]); kopia*/


// DRUKOWANIE
for (j=0; j<ILE; j++){
for (i = 0; i<DA; i++){
  printf("%c", a[j][i]);
}
printf(" ");
for (i=0; i<DB; i++){
  printf("%c", b[j][i]);
}
printf(" ");
  printf("%i\n", c[j]);

}
printf("\n");


}

