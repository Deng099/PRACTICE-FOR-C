//反转字符串
#include <stdio.h>
#include <string.h>
int main()
{
    int i ;
    char str[100] ;
    
    char temp = ' ' ;
    while ( fgets ( str , sizeof (str) ,stdin ) != NULL ) 
    {
        str[ strcspn(str,"\n") ] = '\0' ;
        for ( i = 0 ; i < ( strlen(str) / 2 ) ; i ++ )
        {
            temp = str[i] ;
            str[i] = str[ strlen(str) - 1 - i ] ;
            str[ strlen(str) - 1 - i ] = temp ;
        } 

        printf ("%s" , str ) ;
    } 
    
    
}