#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cislo = 0;
    for (int i = 1; i<= 20; i++)
    {
        cislo = i + cislo;
    
    }
    printf ("%i\n", cislo);
    return 0;
}
