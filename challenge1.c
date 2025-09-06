#include <stdio.h>

int main(){
  
  int nbr1;

  printf("entres la premier numero:");
  scanf("%d",&nbr1);
  
  for (int i = 0; i <11; i++)
  {
    printf("%d*%d=%d\n",nbr1,i,nbr1*i);
  }
  
return 0;
}