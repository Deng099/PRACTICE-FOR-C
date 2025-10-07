#include <stdio.h>
int main()
{
    float celsius,fahr;
    float upper, lower,step;
    printf("upper,lower:");
    scanf("%f,%f", &upper, &lower );
    step = 30 ;
    printf("fahr , celsius \n");
    for (fahr = lower ; fahr <= upper ; fahr = fahr + step )
    {
        celsius = ( fahr - 32 ) * 5 / 9 ;
        
        printf("%0.2f\t%10.2f\n",fahr,celsius);
    }
   
    return 0;

}