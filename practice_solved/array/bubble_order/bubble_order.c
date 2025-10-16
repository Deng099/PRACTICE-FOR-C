//将整数从大到小排序
//冒泡排序：先让每个相邻的比较，把最小的推到最后；再在外面嵌套一层循环，依次对前10个，前9个，前8个...进行相同处理。
//新增处理：可输入未知个整数，遇到非整数字符（字母或者符号）或者 ctrl + z 停止输入
#include <stdio.h>
int main()
{
    int mark [1000] ;
    int i = 0;
    
    while (scanf ("%d" , & mark [i] ) == 1)  //遇到非整数字符（字母或者符号）或者 ctrl + z 停止输入
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
    int k ;
    for ( k = 0 ; k < i ; k++ )
    {
        printf ( " %d" , mark [k] ) ;
    }
    return 0 ;
}