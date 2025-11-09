#include <stdio.h>
int main()
{
    int n , k ;
    scanf ("%d%d" , &n , &k ) ;
    int i ;
    char xuehao[20];
    int j , count , count1 = 0 ;
    int a = 0 , b ;
    int done ;
    float shiduan[50000] ;
    float table[50][2] ;
    
    int p , q ;
    
    //步骤1：直接把节次赋值给table，避免动态统计，同时让时段小的在前面
    //非常巧妙的处理！
    for (i = 0; i < 49; i++)
    {
        int day = i / 7 + 1;      // 星期几：1-7
        int period = i % 7 + 1;   // 节次：1-7
        table[i][0] = day + period * 0.1f;  // 如1.1, 1.2等
        table[i][1] = 0;          // 初始人数为0
    }
    
    //输入时段，存到shiduan[]里面
    //count1为实际的总共要统计的时段数
    for ( i = 0 ; i < n ; i++) 
    {
        scanf ("%s %d" , xuehao , &j) ;
        for ( count = 0 ; count < j ; count ++ )
        {
            scanf ("%f" , &shiduan[count1] ) ;
            count1 ++ ;
        }
    }
    
    //统计人数
    for ( p = 0 ; p < count1 ; p++)
    {
        if (shiduan[p] > 0 )
        {
            
            for ( i = 0 ; i < a ; i ++ )
            {
                if ( shiduan[p] == table[i][0] )
                {
                    table[i][1] ++ ;
                    break ;
                }
            }
        }
    }

    //开始按人数排序

    float temp ;
    a = 49;  // 总共有49个固定时间段
    for ( p = a - 1 ; p > 0 ; p -- )
    {
        for ( i = 0 ; i < p ; i++ )
        {
            if ( table[i][1] > table[i+1][1] )
            {
                temp = table[i][0] ;
                table[i][0] = table[i+1][0] ;
                table[i+1][0] = temp ;
                temp = table[i][1] ;
                table[i][1] = table[i+1][1] ;
                table[i+1][1] = temp ;
            }
        }
    }
    for ( i = 0 ; i < k ; i ++ )
    {
        printf ("%.1f %.0f\n" , table[i][0] , table[i][1] ) ;
    }

    
}