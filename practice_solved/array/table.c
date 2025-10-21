//把输入的数据按照 数据/出现频数 绘制成表格
//老毛病：找不到数据一定是【全部找遍了都没有】再添加新的一行。注意循环结构。
#include <stdio.h>
int main()
{
    int mark[100] ;
    int i = 0 ;
    while ( i < 100 && scanf ("%d" , & mark[i] ) == 1 )
    {
        i ++ ;
    }
    int j , k ;
    int row = 0 ;
    int found = 0 ;
    int table[100][2] ;
    table [0][0] = mark[0] , table [0][1] = 1 ;
    for ( j = 1 ; j < i ; j++ )
    {
        found = 0 ;
        for ( k = 0 ; k <= row ; k++ )
        {
            if ( mark[j] == table [k][0] )
            {
                table[k][1] ++ ;
                found = 1 ;
                break ;
            }
        }
        if ( found == 0 ) 
            {
                row ++ ;
                table[row][0] = mark [j] ;
                table[row][1] = 1 ;
            }
    }
    int m , n ;
    for ( m = 0 ; m <= row ; m ++ )
    {
        printf ("%d\t%d\n" , table [m][0] ,table [m][1]) ;
    }
}