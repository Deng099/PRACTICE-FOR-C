//长串里找短串
#include <stdio.h>
#include <string.h>
int main()
{
    int i , j ;
    int done = 0 ;
    int match = 0 ; 
    char target[10] ;
    char str[100] ;
    scanf ("%s" , str ) ;
    scanf ("%s", target ) ;
    int len1 = strlen(target) ;
    int len2 = strlen(str) ;
    if ( len1 > len2) 
    {
        printf ("not found") ;
    }
    for ( i = 0 ; i < len2 - len1 ; i ++)  //优化：i 小于 len2 - len1 即可 
    {
        done = 0 ;
        for ( j = 0 ; j < len1 ; j ++)
        {
            if ( str[i+j] != target[j] )
            {
                done = 1 ;
                break ;
            }
        }
        if ( done == 0 )
        {
            printf (" found , from %d to %d\n" , i + 1 , i + len1 ) ; 
            match = 1 ;
        }
        
    }
    if ( match == 0 )
    {
        printf ("not found") ;
    }
}