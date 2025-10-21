#include <stdio.h>
int main()
{
    int i = 0 ;
    int mark[100] ;
    while ( i < 100 && scanf("%d" , &mark[i] ) == 1 )
    {
        i ++ ;
    }
    int j , k ;
    for ( k = i ; k > 1 ; k -- )
    {
        for ( j = 0 ; j < k - 1 ; j ++ )
        {
            if ( mark[j] > mark[j+1] )
            {
                int temp = mark[j] ;
                mark[j] = mark[j+1] ;
                mark[j+1] = temp ;
            }

        }
    }
    
    int num ;
    int done = 0 ;
    scanf ("%d" , &num ) ;
    int left = 0 , right = i - 1 ;
    int mid = i / 2 ;
    //错误做法：当 left 和 right [相邻] (特别需要考虑！！)时就会卡住
    /*
    while ( mid >=0 && mid < i ) 
    {
        mid = ( left + right ) / 2 ;
        if ( num < mark[mid] )
        {
            right = mid ;
        }
        if ( num == mark[mid] )
        {
            printf ( "found\n" );
            done = 1 ;
            break ;
        }
        if ( num > mark[mid] )
        {
            left = mid ;
        }
    }
    */
   //正确的边界处理做法：
   while ( left <= right ) //只要这个循环条件足矣！
    {
        mid = ( left + right ) / 2 ;
        if ( num < mark[mid] )
        {
            right = mid - 1 ;
        }
        if ( num == mark[mid] )
        {
            printf ( "found\n" );
            done = 1 ;
            break ;
        }
        if ( num > mark[mid] )
        {
            left = mid + 1 ;
        }
    }
    if ( done == 0 )
    {
        printf ("not found\n") ;
    }
}