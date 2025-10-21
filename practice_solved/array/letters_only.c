//剔除字符串中非字符
#include <stdio.h>
int main()
{
    int i = 0 , j = 0 ;
    char str[100] ;
    char clean[100] ;
    scanf ("%s" , str ) ;
    for ( i = 0 ; i < 100 ; i ++ )
    {
        if ( (str [i] >= 'a' && str[i] <= 'z') || (str [i] >= 'A' && str[i] <= 'Z') )
        {
            clean[j] = str[i] ;
            j ++ ;
        }
    }
    for ( i = 0 ; i < j ; i ++ )
    {
        printf ("%c" , clean[i] ) ;
    }
}