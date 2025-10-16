//反复练！！！

//无论哪一种操作，易忘情况:0 , 个位数 , 第一个或最后一个数字有没有被打印出来或参与循环etc.
//从左往右切数字，数位数
//先数位数，再利用位数切左边，不然不好做
#include <stdio.h>
#include <math.h>
int main()
{
    int digit = 1 ;
    int num ;
    scanf ("%d" , &num) ;
    int temp = num ;
    for ( digit = 1 ; temp >= 10 ; digit ++)
    {
        temp = temp / 10 ; 
    }
    int shu ;
    for ( ; digit > 0 ; digit -- )
    {
        shu = num / pow ( 10 , digit - 1 ); 
        printf ( "%d\n" , shu ) ;
        num = num - shu * pow ( 10 , digit - 1 ) ;
    }
}

//倒着切割
//注意：易漏掉第一位！为此必须在循环外再加一次
#include <stdio.h>
int main()
{
    int i , shu ;
    scanf ("%d" , &i ) ;
    for ( ; i > 9 ;)
    {
        shu = i % 10 ;
        i = i / 10 ;
        printf ("%d\n" , shu ) ;
    }
    printf ("%d" , i ) ;
}

//反转
//在“倒着切割”输出的时候不分行即可