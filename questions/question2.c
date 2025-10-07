//万分小心！！！在每次循环中，sum ,digits 需要重置！！！在循环开始的第一行就重新赋值
//yoj
#include <stdio.h>
int main()
{
    long long a , b , c = 0 , d , tempa , digits = 0 , count = 0 , sum = 0 , n ;
    a = 1 ,b = 2 ;
    scanf ("%lld" , &n );
    
    while  ( a < n )
    {
        tempa = a ;
        sum = 0 ;
        digits = 0 ;
        do
        {
            d = tempa % 10 ;
            sum += d ;
            tempa = tempa / 10 ;
            digits ++ ;

        }
        while ( tempa >= 1 );

        if ( sum / digits >= 4)
        {
            count ++ ;
        }
        c = a + b ;
        a = b ;
        b = c ;
         

    }
    printf ("%lld" , count );
    return 0 ;
}