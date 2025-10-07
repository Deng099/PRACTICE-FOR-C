//yoj
#include <stdio.h>
int main()
{
    int a , b , row , col , count = 0;
    scanf (" %d %d" , &row , &col );
    for ( a = 1 ; a <= row ; a ++)
    {
        for( b = a ; count < col ; b += a)
        {
            count ++ ;
            printf ("%d ", b ) ;
            
        } 
        count = 0 ;
        printf ("\n") ;
    }
    return 0 ;  
}