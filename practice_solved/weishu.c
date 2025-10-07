/*计算正整数[a,b]之间的全部“同构数”之和。
所谓“同构数”，是指一个正整数n是它平方数的尾部，则称n为同构数。
如6的平方是36，6出现在36的右端，6就是同构数；25的平方数625，25是同构数；76的平方数是5776，76是同构数。
*/
//写得想死
#include <stdio.h>
#include <math.h> 
int main()
{
    int a , b , i , j , times , h , sum = 0 ;
    scanf ("%d %d", &a , &b ) ;
    
    for( i = (a<b?a:b) ; i <= (a>b?a:b) ; i ++)
    {
        if ( i % 10 == 1 || i % 10 == 5 || i % 10 == 6) 
        {
            j = pow(i ,2);
            for ( times = 1 ; times <= 8 ; times ++)
            {
                h = pow (10 , times) ;
                if ( j % h == i )
                {
                    sum += i ;
                    break;
                }
                else
                {
                    continue;
                }
            }

        }
        else 
        {
            continue ;
        }
        
    }
    printf("%d", sum );
}