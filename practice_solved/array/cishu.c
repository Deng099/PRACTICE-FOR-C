//查找出现频数，第一次出现的下标，最后一次出现的下标
#include <stdio.h>
int main()
{
    int i = 0 ; 
    int mark[100] ;
    while ( i < 100 && scanf ("%d" , &mark[i]) == 1 )
    {
        i ++ ;
    }
    int found = 0 ;
    int num , first , last ;
    int j , count = 0 ;
    scanf ("%d" , &num) ;
    for ( j = 0 ; j < i ; j ++ )
    {
        if ( num == mark [j] )
        {
            count ++ ;
            if ( count == 1 )
            {
                first = j ;
            }
            found = 1 ;
            last = j ;
        }
    }
    if ( found == 1 )
    {
        printf ("found , first = %d , last = %d\n" , first , last ) ;
    }
    if ( found == 0 )
    {
        printf ("not found\n") ;
    }
}