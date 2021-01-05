#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int x;
    printf("Číšla od 1 do 100 dělitelná pěti\n");
    x = 1;
    while (x<=100)
    {
        if(x % 5 ==0)
        {
            printf("%d\n",x);
        }
        x++;
    }
}