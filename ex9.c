#include <stdio.h>

int main(){
  int n,count = 0;
  printf("entrez une numero positif:\n");
  scanf("%d",&n);
  if (n == 0)
  {
    count = 1;
  }else{
    while (n)
    {
      n = n / 10;
      count++;
    }
  }
printf("nombre de chiffre :%d",count);

return 0;
}