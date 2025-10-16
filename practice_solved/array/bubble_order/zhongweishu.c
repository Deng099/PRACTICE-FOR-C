//在冒号排序基础上，输出中位数
#include <stdio.h>
int main()
{
    int mark [1000] ;
    int i = 0;
    
    while ( scanf ("%d" , & mark [i] ) == 1  )
    {
        i ++ ;
    }
    int j ; 
    int temp ;
    int num = i ;
    for ( num = i ; num > 0 ; num -- )
    {
        for ( j = 0 ; j < num - 1 ; j ++)
        {
            if ( mark [j] < mark [j + 1])
            {
                temp = mark [j] ;
                mark [j] = mark [ j + 1 ] ;
                mark [ j + 1 ] = temp ; 
            }
        }
    }
    int zhongweishu ;
    if ( i % 2 == 0 )
    {
        zhongweishu = ( mark [ i / 2 - 1 ] + mark [ i / 2 ] ) / 2.0 ;
    }
    else 
    {
        zhongweishu = mark [ (i + 1) / 2 ] ;
    }
    printf ( " %d" , zhongweishu ) ;
    return 0 ;
}