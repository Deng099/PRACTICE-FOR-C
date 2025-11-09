//yoj 643 坑蛮多还标难度1..需要再练习！！
//N:123X 按字符串输入，遇到不是数字的那一位就是X，用str[i]记录
//然后先处理其他位，再把那一位代入，再在循环里判断能否整除，count++
#include <stdio.h>
#include <string.h>
int main()
{
    int i , j , k ;
    int num = 0 , chushu , count = 0 ;
    int real_num ;
    int start_num ;
    char str[5] ;
    scanf ("%s" , str ) ;
    scanf ("%d" , &chushu ) ;
    int len = strlen(str) ;
    for ( i = 0 ; i < len ; i ++)
    {
        if ( str[i] == 'X' )
        {
            start_num = ( i == 0 ) ? 1 : 0 ;
            for ( j = start_num ; j < 10 ; j++ )
            {
                num = 0 ;
                str[i] = '0' + j ;
                for ( k = len - 1 ; k >= 0 ; k --)
                {
                    real_num = str[k] - '0' ;
                    num = num * 10 + real_num ;
                }
                if ( num % chushu == 0 )
                {
                    count ++ ;
                }
            }
        }
    }
    printf ("%d" , count ) ;
}



//643again
//输入123X，用字符串保存，判断是否是X，是的话就替换成0~9，在看看能不能被整除
//首位不能是0
#include <stdio.h>
#include <string.h>
int main()
{
    int i , j , k , chushu ;
    int count = 0 ;
    int start_num ;
    char str[5] ; 
    int real_num[5] ;
    scanf ("%s" , str ) ;
    scanf ("%d" , &chushu ) ;
    int len = strlen(str) ;
    int num = 0 ;
    for ( i = 0 ; i < len ; i++ )
    {
        if ( str[i] == 'X' )
        {
            start_num = ( i == 0 ) ? 1 : 0 ;
            for ( j = start_num ; j < 10 ; j ++ )
            {
                num = 0 ;
                str[i] = j + '0' ;
                for ( k = 0 ; k < len ; k ++ )
                {
                    real_num[k] = str[k] - '0' ;
                    num = num * 10 + real_num[k] ;
                    if ( num % chushu == 0 )
                    {
                        count ++ ;
                    }
                }
            }
        } 
    }
    printf("%d" , count ) ;

}