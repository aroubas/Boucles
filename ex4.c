#include <stdio.h>

int main(){

  int base,exposant;
  int r = 1;
   printf("entrez la base");
   scanf("%d",&base);
   printf("entrez la exposant");
   scanf("%d",&exposant);
   
   int i= 0;
   
   while (i < exposant)
   {
    ,r = r * base;
    printf("%d^%d =%d",base,exposant,r);
    i++;
   }
   return 0;
}