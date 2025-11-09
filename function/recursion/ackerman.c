#include <stdio.h>

int ack_value[100][100] ;
int has_value[100][100] ;

int ackerman ( int m , int n ) ;

int main()
{
    int m , n ;
    scanf ("%d%d" , &m , &n ) ;

    //初始化has_value数组

    for ( int i = 0 ; i < 100 ; i ++ )
    {
        for ( int j = 0 ; j < 100 ; j ++ )
        {
            has_value [i][j] = 0 ;
        }
    }
    
    printf ("%d" , ackerman( m , n ) ) ;
}

int ackerman ( int m , int n )
{
    int result ;
    if ( has_value[m][n] )
    {
        return ack_value[m][n] ;
    }
    if ( m == 0 )
    {
        result = n + 1 ;
    }
    else if ( m != 0 && n == 0 )
    {
        result = ackerman( m - 1 , 1 ) ;
    }
    else
    {
        result = ackerman ( m - 1 , ackerman ( m , n - 1 ) ) ;
    }
    ack_value [m][n] = result ;
    has_value [m][n] = 1 ;
    return result ;
}