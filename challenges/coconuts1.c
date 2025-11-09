#include <stdio.h>
int main()
{
    long long num , temp , renshu ;
    int count = 0 ;
    int done = 0 ;
    int done1 = 0 ;
    int done2 = 0 ;
    while (done == 0)
    {
        scanf ( "%lld" ,&num ) ;
        
        if ( num != 0 )
        {
            done2 = 0 ;
            for ( renshu = num - 1 ; renshu > 0 ; renshu --)
            {
                done1 = 0 ;
                temp = num ;
                for ( count = 1 ; count <= renshu ; count ++)
                {
                    if ( temp % renshu == 1 )
                    {
                        
                        temp = temp - temp / renshu - 1 ; 
                    }
                    else
                    {
                        done1 = 1 ;
                        break ;
                    }
                }
                
                if ( done1 == 0 && temp % renshu == 0 )
                {
                    done2 = 1 ;
                    break ;
                }
            }
            if ( done2 == 1)
            {
                printf("%lld\n" , renshu );
            }
            else 
            {
                printf ("no solution\n") ;
            }
        }
        else 
        done = 1 ;
    }
}