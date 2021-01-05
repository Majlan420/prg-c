#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  int cislo;
  int min = 1;
  int max = 6;

  srand(time(NULL));
  cislo = (rand() % (max-min+1)) + min;
  printf("%d\n",cislo);

  return 0;

}

