//去掉序列里的重复数并输出
//可配合bubble_order使输出序列按大小排列
#include <stdio.h>
int main()
{
    int mark [1000] ;
    int i = 0 ;
    while ( (scanf ("%d" , &mark[i]) == 1 ))
    {
        i ++ ;
    }
    int order[1000] ;
    int j , k ;
    int done = 0 ;
    for ( k = 1 ; k < i ; k ++ )
    {
        done = 0 ;
        for ( j = 0 ; j < k ; j ++ )
        {
            if ( mark [ j ] == mark [ k ] )
            {
                done = 1 ;
                break ;
            }
        }
        if ( done == 0 )
        {
            printf ("   %d", mark [k] ) ;
        }
    }
}