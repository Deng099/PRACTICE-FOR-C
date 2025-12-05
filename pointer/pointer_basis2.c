#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

void print_all ( int *a , int len )
{
    int count ;
    for ( count = 0 ; count < len ; count ++ )
    {
        printf ("%d " , *( a + count) ) ;
    }

    // 指针的算术运算：a+1 并不是地址值加1，而是 加上它所指向类型的大小
    // 对于 int (通常是4字节)，a+1 意味着地址加4，从而指向下一个整数。

    printf ("\n") ;

    int *p = &a[0] ;
    for ( p = a ; p < a + len ; p ++ )
    {
        printf ("%d " , *p ) ;
    }

    int *q = a ;
    while( *q != -1 )   //以-1作为结束标志
    {
        printf ("%d" , *q ++ ) ;    //不会输出-1
    }
}


void swap ( int *p , int *q ) 
{
    int temp = *p ; 
    *p = *q ;
    *q = temp ;
}


int main()
{
    int a = 10 ; 
    int b = 20 ;

    swap (&a,&b) ;
    printf ("%d\n%d\n" , a , b ) ;

    //通过指针 修改变量
    int i = 30 ;
    int *p = &i ;

    *p = 40 ;
    printf ("%d\n" , i ) ;

    //遍历数组
    //注意sizeof的运用
    int arr[] = { 45,5,5,9,4,6,2,5,8,6,48,-1 } ;
    int len = sizeof ( arr ) / sizeof ( arr[0] ) ;

    print_all ( arr , len ) ;

    int mark[10] ;
    for ( int j = 0 ; j < 10 ; j ++ )
    {
        mark[j] = j ;
    }
    int *q = mark ;
    int *t = &mark[5] ;

    printf ("%d\n" , * (q+1) ) ; //q+1得到的是下一个元素的地址
    printf ("%d\n" , t - q ) ;//两个指针相减得到相差元素个数

    //字符串里找字母
    char str[] = "hello" ;
    char *ptr = strchr( str , 'l' ) ;   //strchr，返回在str里第一次出现的char的指针
    printf ("%s\n" , ptr ) ;  //ptr现在是从第一个开始的字符串 
    //如何找第二个？
    ptr = strchr ( ptr + 1 , 'l' ) ;
    printf ("%s" , ptr ) ;
    //如果没有找到，返回null

    //如果想要l之前的部分呢？
    char c = *p ;
    *p = '\0' ;

    //再恢复回去？
    *p = c ;

    //字符串里找字符串
    char *ptr1 = strstr( str, "ll" ) ;
    printf ("%s" ,  ptr1 ) ;

    char *ptr2 = strcasestr ( str, "EL" ) ; //忽视大小写
    printf ("%s" , ptr2 ) ; 


}