#include <stdio.h>
int main()
{
    char p1 , p2 , p3 ;
    printf ("X Y Z\n") ;
    for ( p1 = 'A' ; p1 <= 'C' ; p1 ++)
    {
        for ( p2 = 'A' ; p2 <= 'C' ; p2 ++)
        {
            for ( p3 = 'A' ; p3 <= 'C' ; p3 ++)
            {
                //注意这里非常高频的限制条件：两两不相等
                if ( p1 != p2 && p2 != p3 && p1 != p3 && p1 != 'A' && p1 != 'C' && p3 != 'C')
                printf ("%c %c %c", p1 ,p2 ,p3 );

            }
        }
    }

}