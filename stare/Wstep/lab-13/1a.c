#include <stdio.h> 
#include <string.h>   
#define WLK_BAZY 10000 
#define MAX_DL_NAZW 16  
#define MAX_DL_IM 11   

typedef struct{
char imie[MAX_DL_IM]; 
char nazwisko[MAX_DL_NAZW]; 
int zarobki;
}osoba;
void qsort(osoba [], int , int );
int porownaj(osoba [], int i, int j); 
void zamien(osoba [], int, int );  
 int main(){  
 osoba dane[WLK_BAZY];    int i=0;    
 for(i=0 ;i<WLK_BAZY;i++)
      scanf("%s %s %i", dane[i].imie, dane[i].nazwisko,  
&dane[i].zarobki);
    qsort(dane, 0, WLK_BAZY-1);
    for(i=0 ;i<WLK_BAZY; i++)      
	printf("%-20s%-20s  %6i\n", dane[i].imie, dane[i].nazwisko,  dane[i].zarobki);
    return 0;  }    
void qsort(osoba dane[WLK_BAZY], int a, int b){
    int dd, i=a, j=b, dziel;    
    dziel=(a+b)/2;
    do{
      while(porownaj(dane, i, dziel)<0) i++;      
    while(porownaj(dane, j, dziel)>0) j--;
      if(i<=j){
        zamien(dane, i, j);
        i++; j--;      }    
     }while(i<j);
    if(a<j)
      qsort(dane, a, j);
    if(b>i)
      qsort(dane, i, b);    }    
     void zamien(osoba dane[WLK_BAZY], int i, int j){
    osoba tmp;
    strcpy(tmp.imie, 
    dane[i].imie);
    strcpy(dane[i].imie, dane[j].imie);
    strcpy(dane[j].imie, tmp.imie);      
    strcpy(tmp.nazwisko, dane[i].nazwisko);
    strcpy(dane[i].nazwisko, dane[j].nazwisko);    
    strcpy(dane[j].nazwisko, tmp.nazwisko);
      tmp.zarobki=dane[i].zarobki;    
    dane[i].zarobki=dane[j].zarobki;
    dane[j].zarobki=tmp.zarobki;
  }   
 int porownaj(osoba dane[WLK_BAZY], int i, int j){
    if(strcmp(dane[i].nazwisko, dane[j].nazwisko) < 0)      
return -1;
    else if(strcmp(dane[i].nazwisko, dane[j].nazwisko) == 0)      
if(strcmp(dane[i].imie, dane[j].imie)<0)
        return -1;
      else if(strcmp(dane[i].imie, 
      dane[j].imie) == 0)
        return 0;
      else
        return 1;
    else
      return 1;  
}
