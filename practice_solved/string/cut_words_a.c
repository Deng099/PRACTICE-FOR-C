//yoj409
//用str[200][50]和fgets还是scanf输入？
//对于每个单词，分解字符来看，如果遇到a或者A，就储存到另一个数组里
//另一个数组strlen最大就输出；如果为空，输出-1

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200][51] ;
    int count ;
    for ( count = 0 ; count < 200 ; count ++ )
    {
        //如果超过50个字符，需要主动截断：最多读取50个，scanf ("%50s" , ......)
        if (scanf ("%50s" , str[count] ) != 1 )
        {
            break ;
        }
        //输入：空格切割单词，以回车作为结束输入
        int next = getchar() ;
        if ( next == '\n' )
        {
            break ;
        }
    }
    //现在已经存好所有单词了，一共count个单词
    int i , j , k = 0 ;
    int done = 0 ;
    char youade[200][51] ;
    for ( i = 0 ; i < count ; i ++ )
    {
        for ( j = 0 ; j < strlen(str[i]) ; j++ )
        {
            if ( str[i][j] == 'A' || str[i][j] == 'a' )
            {
                strcpy( youade[k] , str[i] ) ;
                k ++ ;
                done = 1 ;
                break ;
            }
        }
    }
    //存好所有有a的单词,一共k个
    int p , max = 0 ;
    if ( done == 1 )
    {
        for ( p = 0 ; p < k ; p ++ )
        {
            if ( strlen( youade[max] ) < strlen( youade[p] ) )
            {
                max = p ;
            }
        }
        printf ("%s" , youade[max] ) ;
    }


    if ( done == 0 )
    {
        printf ("-1") ;
    }
}