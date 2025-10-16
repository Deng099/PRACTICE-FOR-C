//1000以内，一个素数被分解为两个素数之和————素数的分解
//错误点： k的赋值是从 j + 1 开始，因为 k 是 j 的倍数
#include <stdio.h>
int main()
{
    int mark[1000] ;
    int i ;
    for ( i = 0 ; i < 1000 ; i++)
    {
        mark [i] = 1 ;
    }
    mark [0] = mark [1] = 0 ;
    int j , k ;
    for ( j = 2 ; j < 1000 ; j++ )
    {
        if ( mark [j] == 1 )
        {
            for ( k = j + 1 ; k < 1000 ; k ++ )
            {
                if ( k % j == 0)
                {
                    mark [k] = 0 ;
                }
            }
        }
    }
    
    j = k = 0 ;
    for ( j = 2 ; j < 1000 ; j++ )
    {
        if ( mark [j] == 1 )
        {
            for ( k = j + 1 ; k < 1000 ; k ++)
            {
                if ( mark[k] == 1 && mark[j + k] == 1 && j + k < 1000)
                {
                    printf ( "%d = %d + %d\n" , j + k , j , k ) ;
                }
            }
        }
    }
}