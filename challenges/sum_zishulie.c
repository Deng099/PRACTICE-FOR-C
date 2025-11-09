//yoj653
//要求找到1 ≤ i ≤ j ≤ n，使得整数序列中的子序列 Ai+Ai+1+…+Aj，的值最大。
//输出一个整数，表示子序列最大连续和

/*
对于每个元素 A[i]，我们有两种选择：
把它加入前面的连续子数组（current_sum + A[i]）
从它开始一个新的子数组（A[i]）
所以取 max(A[i], current_sum + A[i])
*/
#include <stdio.h>
int main()
{
    int geshu ;
    scanf ("%d" , &geshu ) ;
    int mark[100] ;
    int i ;
    for ( i = 0 ; i < geshu ; i ++ )
    {
        scanf ("%d" , &mark[i] ) ;
    }
    int current , max ;
    current = max = mark[0] ;
    for ( i = 1 ; i < geshu ; i ++ )
    {
        current = ((current + mark[i]) > mark[i]) ? (current + mark[i]) : mark[i] ;
        max = (max > current) ? max : current ;
    }
    printf ("%d" , max ) ;
} 