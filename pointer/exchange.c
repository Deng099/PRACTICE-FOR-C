/*
交换两个变量的值，不能直接交换！要使用指针。
比喻:两个房子搬家，搬家公司按照纸条地址进行改造
    函数结束后，纸条（地址）被销毁，实际的房子（内存，属于main，不受函数影响）完成改造
*/


#include <stdio.h>

void swap ( int *p , int *q )
{
    int temp ;
    temp = *p ;
    *p = *q ;     //区别：并不是a变成b，而是 p存的东西 变成b
    *q = temp ;
}

int main()
{
    int a , b ;

    printf ("请输入两个整数作为a和b的值") ;
    scanf ("%d%d" , &a , &b ) ;

    swap(&a , &b) ; 
    printf ("交换后:%d  %d" , a , b ) ;


}