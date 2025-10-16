//数据在原基础上迭代可节省算力
#include <stdio.h>
#include <math.h>
#define SMALL 1e-5
#define PI 3.1415
int main()
{
    double x ;
    scanf ("%lf" , &x ); 
    int done = 0 ;
    double value = x , result = x ;
    while ( x - PI > 0 )
    {
        x = x - 2 * PI ;
    }
    while ( x + PI < 0 )
    {
        x = x + 2 * PI ;
    }
    //处理边界情况
    while ( fabs(x) <= SMALL )
    {
        result = 0 ;
        done = 1 ;
        break ;
    }

    int fuhao = 1 , count ;
    
    for ( count = 2 ; fabs(value) > SMALL && done == 0 ; count += 2 )
    {
        fuhao = -fuhao ;
        value = value * x * x * fuhao / count / ( count + 1 ) ;
        result += value ;
    }
    printf ("%lf" , result) ;
}