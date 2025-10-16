//yoj147，教室排课，枚举
#include <stdio.h>
int main()
{
    int num1 , num2 , num3 , num4 ;
    scanf("%d%d%d%d", &num1 , &num2 , &num3 , &num4 );
    int mark[8] ;
    mark[0] = 120 ;
    mark[1] = 40 ;
    mark[2] = 85 ;
    mark[3] = 50 ;
    mark[4] = 100 ;
    mark[5] = 140 ;
    mark[6] = 70 ;
    mark[7] = 100 ;
    int i , j , k , p ;
    int done = 0 ;
    for ( i = 0 ; i < 8 ; i++ )
    {
        for ( j = 0 ; j < 8 ; j++ )
        {
            for ( k = 0 ; k < 8 ; k++ )
            {
                for ( p = 0 ; p < 8 ; p++ )
                {
                    if ( mark[i] >= num1 && mark[j] >= num2 && mark[k] >= num3 && mark[p] >= num4 
                        && i != j && i != k && i != p && j != k && j != p && k != p )
                        {
                            printf ("%d %d %d %d\n", i+1 , j+1 , k+1 , p+1 );
                            done = 1 ;
                        } 

                }
            }
        }

    }
    if ( done == 0 )
    {
        printf ("-1") ;
    }
    
}