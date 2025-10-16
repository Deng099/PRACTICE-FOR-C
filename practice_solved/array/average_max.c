//求一维数组的平均值，最大值及下标
#include <stdio.h>
int main()
{
    int mark[10] ;
    int i , index = 0 ;
    double sum , average , max = 0 ;
    for( i = 0 ; i < 10 ; i ++)
    {
        scanf ("%d" , &mark[i]) ;
        sum += mark[i] ;
        if ( i > 0 && max < mark[i] )
        {
            max = mark[i] ;
            index = i ;
        }
        
    }
    average = sum / 10.0 ;
    printf ("%.2lf\n%.2lf\n%d\n" , average , max , index );
    return 0 ;
}