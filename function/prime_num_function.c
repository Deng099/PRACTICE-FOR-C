#include <stdio.h>
int is_prime ( int a ) ;
int main()
{
    int n ;
    scanf ("%d" , &n ) ;
    printf ("%s" , is_prime (n) ? "yes":"no" ) ;
}

int is_prime ( int a )
{
    int i ;
    for ( i = a / 2 ; i > 1 ; i --) 
    {
        if ( a % i == 0 )
        {
            return 0 ;
        }    
    }
    return 1 ;
}