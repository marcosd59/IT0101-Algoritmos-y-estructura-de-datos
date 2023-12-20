#include <math.h>
#include <stdio.h>

int main()
{

    int n = 11;
    int coci = n;

    while (coci > 0)
    {
        printf("%i ",coci);
        coci = floor(coci/2);
    }

    return 0;
}