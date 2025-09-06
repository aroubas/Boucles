#include <stdio.h>

int main(){
  int n;
  printf("entrez n :");
  scanf("%d",&n);

  for (int i = 1;i <= n;i++)
  {
    printf("%d",i * 2 -1);

  }
  return 0;
}
//Affichage des N Premiers Nombres Impairs