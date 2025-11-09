//多维数组的copy
#include <stdio.h>
void print_matrix ( int arr[3][3] ) ;
int main()
{
    int matrix[3][3] ;
    int i , j ;
    for ( i = 0 ; i < 3 ; i ++)
    {
        for ( j = 0 ; j < 3 ; j ++)
        {
            scanf ("%d" , &matrix[i][j] ) ;  //调用函数，把matrix copy 到arr里面
        }
    }
    print_matrix( matrix ) ; // 直接参数写成数组名就可以
}
void print_matrix ( int arr[3][3] )  //在函数内部，就只存在arr，不存在matrix，只对arr进行操作
{
    int i , j ;
    for ( i = 0 ; i < 3 ; i ++)
    {
        for ( j = 0 ; j < 3 ; j ++)
        {
            printf ("%d     " , arr[i][j] ) ;
        }
        printf ("\n") ;
    }
}