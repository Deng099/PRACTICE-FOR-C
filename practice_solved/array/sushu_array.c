//输出1000以内的素数
#include <stdio.h>
int main()
{
    int mark[1000] ;
    int i , j , k , m ;
    for ( i = 0 ; i < 1000 ; i++)
    {
        mark[i] = 1 ;
    }
    for ( j = 2 ; j * j < 1000 ; j ++)  //优化1 ：j * j < 1000 即可
    {
        if ( mark[j] == 1 )
        {
            for( k = j + 1 ; k < 1000 ; k++) //优化2 ：k += j 
            {
                if ( k % j == 0 )
                {
                    mark[k] = 0 ;
                }
            }
        }
    }
    for ( m = 2 ; m < 1000 ; m++ )
    {
        if ( mark[m] == 1 )
        {
            printf ("%d\n" , m ) ;
        }
    }
    return 0 ;
}