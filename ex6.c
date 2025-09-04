#include <stdio.h>

int main(){
  int n;
  printf("entrez n:");
  scanf("%d",&n);

  for (int i = 1;i <= n;i++)
  {
    printf("%d\n",i * 2 );

  }
  return 0;
}