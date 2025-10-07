#include <stdio.h>
int main()
{
    int celsius,fahr;
    int upper,lower,step;
    upper = 300;
    lower = 0;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n",fahr,celsius);
        fahr = fahr + 20;
    }
    return 0;
}