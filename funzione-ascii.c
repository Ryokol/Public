#include<stdio.h>
int valoreIntero(char c);
 int main()
 {
  char c,v;
  printf("Inserisci un carattere: ");
  scanf("%c",&c);
  printf("il carattere %c in valore ascii é %d",c,valoreIntero(c));
  return 0;
 }
 
 int valoreIntero (char c)
 {
  return c;
 }