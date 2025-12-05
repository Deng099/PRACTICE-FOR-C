//一个偶数能被分解成两个素奇数之和
//关于判断素数的优化：c ，d 小于平方根即可
#include <stdio.h>
int main()
{
    int num ;
    scanf ("%d" , &num ); 
    int a , b ;
    int c , d ;
    int done = 0 , done2 = 0 ;
    for ( a = 3 ; a <= ( num / 2 ) ; a = a + 2 )
    {
        done = 0 ;
        for ( c = 3 ; c < a ; c+=2 )
        {
            if ( a % c == 0 )
            {
                done = 1 ;
                break ;
            }
        }
        if (done == 0)
        {
            done2 = 0 ;
            b = num - a ;
            for ( d = 3 ; d < b ; d+=2 )
            {
                if ( b % d == 0 )
                {
                    done2 = 1 ;
                    break ;
                }
                
            }

            if ( done2 == 0 )
            {
                printf ("%d=%d+%d" , num , a , b );
                break ;
            }
        }
    }   
}
