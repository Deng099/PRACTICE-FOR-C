//判断素数
#include <stdio.h>
int main ()
{
    int a , b ;
    int i , j ;
    scanf(" %d %d" , &a , &b );
    for (i = (a<b?a:b) ; i <= (a>b? a:b) ; i++ )
    {
        for (j = 2 ; j <= i ; j++)
        {
            if ( i % j == 0)
            {
                break ;
            }
        }
        if (j == i)
        printf ("%d 是素数\n",i);
        
    }
    return 0 ;
}