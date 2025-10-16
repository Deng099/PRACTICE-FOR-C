//算sin(x)和cos(x)
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    double x , epsilon ;
    scanf ("%lf %lf" , &x , &epsilon ) ;
    while ( x > PI )
    {
        x = x - 2 * PI ;
    }
    while ( x < -PI )
    {
        x = x + 2 * PI ;
    }
    while ( fabs ( x ) < 1e-5 )
    {
        x = 0 ;
    }
    
    double s = 0 , c = 1 ;
    double value ;
    int count ;
    value = 1 ;
    for ( count = 1 ; ; count ++ )
    {
        value = value * x / count ;
        if ( count % 2 == 0 )
        {
            c += value ;
        }
        if ( count % 2 == 1 )
        {
            s += value ;
            value = -value ;
        }
        if ( fabs(value) < epsilon )
        {
            break ;
        }
    }
    printf("%lf\n%lf\n" , s , c ) ;
}