#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() 
{
  int cislo = 0;
  for(int i = -128; i <= 128; i++)
  {
      cislo = abs(i) + cislo;
  }
  printf("%i\n", cislo);
    return 0;
}