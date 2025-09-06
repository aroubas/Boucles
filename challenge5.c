#include <stdio.h>

int main(){

  int base,exposant;
  int r = 1;
   printf("entrez la base:");
   scanf("%d",&base);
   printf("entrez la exposant:");
   scanf("%d",&exposant);
   
   int i= 0;
   
   while (i < exposant)
   {
    r = r * base;
    i++;
   }
   printf("%d^%d =%d\n",base,exposant,r);

   return 0;
}
//Calcul de la Puissance