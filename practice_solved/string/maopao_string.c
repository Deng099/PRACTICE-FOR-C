//对若干字符串进行冒泡排序
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0 , j = 0 , k = 0 ;
    char str[10][100] ;
    //积累：i 用来统计实际字符串输入个数 ，并防止越界
    while ( i < 10 && scanf ("%s" , str[i] ) != EOF)
    {
        i ++ ;
    }
    

    char temp[100] ;
    for ( j = i - 1 ; j > 0; j --)
    {
    
        for ( k = 0 ; k < j ; k ++ )
        {
            if ( strcmp ( str[k] , str[k + 1] ) > 0 )
            {
                strcpy( temp , str[k] ) ;
                strcpy( str[k],str[k + 1] ) ;
                strcpy( str[k+1] , temp ) ;
            }
    
        }
    }
    
    for ( j = 0 ; j < i ; j ++ )
    {
        printf ("%s\t" , str[j] ) ;
    }
}