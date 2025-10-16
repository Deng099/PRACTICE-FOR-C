//先输入数据，然后输入一个数，输出ta是第几小的或者not found
//这里采用重复数据相同编号，最后查找数据然后输出编号。
//或者更简单办法：去掉重复数据再进行排序，见repeated_off.c
//还有一种办法就是扫描数据，逐个比较大小，计数器++

#include <stdio.h>
int main()
{
    int i = 0 ;
    int mark [1000] ;
    while ( scanf ("%d" , &mark [i] ) == 1)
    {
        i ++ ;
    }
    int j , k ;
    int temp ;
    for( k = i ; k > 1 ; k--)
    {
        for ( j = 0 ; j < k ; j ++ )
        {
            if ( mark [j] > mark [j + 1])
            {
                temp = mark [j] ;
                mark [j] = mark[j + 1] ;
                mark [j + 1] = temp ;
            }
        }
    }
    int q ;
    int order[1000] ;
    int rank = 1 ;
    for ( q = 0 ; q < i - 1 ; q++)
    {
        order [0] = 1 ;
        if ( mark [q] == mark [q + 1])
        {   
            order [q + 1] = order [q] ;
        }
        else
        {   
            rank ++ ;
            order[q+1] = rank ;
        }
    }
    int num ;
    scanf ("%d" , &num );
    int p ;
    int done = 0 ;
    for ( p = 0 ; p < i ; p++ )
    {
        if ( num == mark[p] )
        {
            printf ("%d" , order[p] ) ;
            done = 1 ;
            break ;
        }
        
    }
    if ( done = 0 )
    {
        printf ("not found") ;
    }
    return 0 ;


}





































/*  
    // 为每个元素分配编号，重复数据相同编号
    int order[1000];
    int rank = 1;
    order[0] = 1;
    for (j = 1; j < i; j++) {
        if (mark[j] == mark[j-1]) {
            order[j] = rank;
        } else {
            rank = j + 1;
            order[j] = rank;
        }
    }
*/

    