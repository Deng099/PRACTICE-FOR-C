//反复练！！！

//无论哪一种操作，易忘情况:0 , 个位数 , 第一个或最后一个数字有没有被打印出来或参与循环etc.
//从左往右切数字，数位数
//先数位数，再利用位数切左边，不然不好做
#include <stdio.h>
#include <math.h>
int main()
{
    int a , b , digits = 1 , i , beifen , value ;
    
    scanf ("%d" , &a );
    beifen = a ;
    while (a / 10 != 0)
    {
        a = a / 10 ;
        digits ++ ;
    }
    
    for ( i = digits - 1 ; i >= 0 ; i --)    
    { 
        b = pow ( 10 , i ) ;
        value = beifen / b ;
        printf ("%d\n", value ) ;
        beifen = beifen % b ;
        
    }    
    
    
}

//倒着切割
#include <stdio.h>
int main()
{
    int a , b , digits ;
    scanf ("%d" , &a );
    for ( digits = 1 ; a / 10 != 0 ; digits ++)
    
    {
        b = a % 10 ;
        printf ("%d ", b );
        a = a / 10 ;
    }
    printf ("%d\n" , a );
    printf ("%d" , digits );
    return 0 ;

}

//反转
//注意：易漏掉第一位！为此必须在循环外再加一次
//更好的做法：选用do while 循环，完成每次循环后再判断
#include <stdio.h>
int main()
{
    int i , j , k , value = 0;
    scanf ("%d" , &i );
    while ( i / 10 != 0)
    {
        j = i % 10;
        k = i / 10;
        
        i = k ;
        value = value * 10 + j ;
    }
    value = value * 10 + i ;  
    printf ("%d", value) ;
    return 0 ;
}