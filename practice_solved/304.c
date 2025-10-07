//yoj
#include <stdio.h>
#include <math.h>
int main()
{
    long i , j ;
    long a,b,n,k,m ;
    int count = 0 ;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&n,&k,&m);
    j = pow ( 10, m-1 );
    for ( i = a ; i <= b ; i++)
    {
        if ( i / j > 0 && i / j < 10)
        {
            if ( i % 10 == n && i % k == 0)
            {
                count ++;
            }
            else
            {
                continue ;
            }
        }
        
        
    }
    printf ("%d",count);
    return 0 ;

}