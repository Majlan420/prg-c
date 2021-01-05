#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cislo; 
  printf("Zadejte číslo a program vám vyhodnotí jestli dané číslo je prvočíslo:");
   scanf("%i", &cislo);
   
   if (cislo == 2)
   {
    printf ("Číslo je prvočíslo");


   }
   else if (cislo > 1)
   {
       for (int i = 2;i < cislo; i++)
       {
           if (cislo %i == 0)
           {
               printf("Číslo není prvočíslo");
               break;
           }
         printf("Číslo je prvočíslo");  
       }
   }
   else
   {
       printf("Číslo není prvočíslo");
   }


return 0;
} 