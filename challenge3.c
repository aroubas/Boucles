#include <stdio.h>

int main(){
  int n;
  int somme = 0;
  printf("entrez n :");
  scanf("%d",&n);
  
  for (int i = 1; i <= n ; i++)
  {
    somme = somme + i;
  }
  printf("la somme de %d numero est = %d",n,somme);
  return 0;
}
//Somme des N Entiers
