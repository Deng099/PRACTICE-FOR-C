//连加（阶乘同理）
#include <stdio.h>
int sum( int a ) ;
int main()
{
    int n ;
    scanf ("%d" , &n ) ;
    printf ("%d" , sum(n) ) ;

}

int sum( int a )
{
    if ( a == 1 )
    {
        return 1 ;
    }
    else
    {
        return sum( a - 1 ) + a ;
    }
}