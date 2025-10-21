//字符串例如“345”转换成可用于计算的整数
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "9";
    printf ("%d\n" , str[0] - '0' ) ;
    
    
    char mark[7] = "498653";
    int i ;
    int j , num = 0 ;
    for ( i = 0 ; i < 6 ; i ++ )
    {
        j = mark[i] - '0' ;
        num = num * 10 + j ;

    }
    printf ("%d" , num ) ;

}