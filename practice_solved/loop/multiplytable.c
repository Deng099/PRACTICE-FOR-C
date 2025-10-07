#include <stdio.h>
int main()
{
    int i ,j ;
    for ( i = 1 ; i <= 9 ; i++ )
    {
        j = 1 ;
        while ( j >= 0 && j <= 9)
        {
        
            printf("%d*%d = %2d\t", i , j , i*j );
            j ++ ;
        }
        printf("\n") ;

    }
}