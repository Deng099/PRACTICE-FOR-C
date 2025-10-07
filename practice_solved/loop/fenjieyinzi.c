//分解因子
#include <stdio.h>
int main()
{
    int i , j ;
    scanf("%d", & i ) ;
    for ( j = 2 ; j <= i ; j ++)
    {
        if ( i % j == 0 )
        {
            printf (" %d ", j );
            i = i / j ;
            j = 1 ;
            
        }
        
    }
    return 0 ;
} 