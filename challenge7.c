#include <stdio.h>

int main(){
  int n,reste;
  printf("entrez n");
  scanf("%d",&n);
  
  printf("n apres :");
  while (n)
  {
    reste = n % 10;
    printf("%d",reste);
    n = n / 10;
  }
  return 0;
}
//Inversion d'un Entier
