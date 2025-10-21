//无论大小写，统计各字母出现次数
#include <stdio.h>
#include <string.h>
int main()
{
    int i ;
    char str[1000] ;
    int count[26] ; 
    for ( i = 0 ; i < 26 ; i ++ )
    {
        count[i] = 0 ;
    }

    fgets( str , sizeof (str) , stdin ) ;
    str[strcspn(str , "\n")] = '\0' ;
    
    int j = 0 ;
    if ( strlen(str) != 0 )
    {
        while (1)
        {
            char c = str[j] ;
            if ( c == '\0' )
            {
                break ;
            }
            if ( c >= 'a' && c <= 'z' )
            {
                count[ c - 'a' ] ++ ;
            }
            if ( c >= 'A' && c <= 'Z' )
            {
                count[c - 'A'] ++ ;
            }
            j ++ ;
            
        }
        for ( i = 0 ; i < 26 ; i ++ )
        {
            printf ( "%c:%d\t" , i + 'a' , count[i] ) ;

        }
    }
}