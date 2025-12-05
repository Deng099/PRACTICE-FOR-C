/*
输入：人数n    前k名

学生课表   学号 p个时间段

输出k行，每行包含一个小数和一个整数，分别表示时间段和该时间段有课的学生人数，

按照有课人数从小到大的顺序输出前k个，

如果某两个时间段的上课人数一样，则时间在前面的先输出。
*/
#include <stdio.h>

int main()
{
    int n , k ;
    scanf ("%d%d", &n , &k );


    //初始化数组

    float shiduan[50][2] ;

    
    int count = 0 ;
    for ( count = 0 ; count < 49 ; count ++ )
    {
        shiduan[count][0] = 1.1 + ( count / 7 ) + ( count % 7 ) * 0.1  ;
        shiduan[count][1] = 0 ;
    }

    //扫描数据
    int i , j , q ;
    for ( i = 0 ; i < n ; i ++ )
    {
        char xuehao[20] ;
        scanf ("%s" , xuehao ) ;
        int p ;
        float linshi ;
        scanf ("%d" , &p ) ;
        for ( j = 0 ; j < p ; j ++ )
        {
            scanf ("%f" , &linshi ) ;
            
            for ( q = 0 ; q < 49 ; q ++ )
            {
                if ( linshi == shiduan[q][0] )
                {
                    shiduan[q][1] ++ ;
                }
            }

        }
    }

    //排序

    for ( i = 49 ; i > 0 ; i -- )
    {
        for ( j = 0 ; j < i - 1 ; j ++ )
        {
            if ( shiduan[j][1] > shiduan[j + 1][1] )
            {
                float temp1 = shiduan[j][0] ;
                shiduan[j][0] = shiduan[j+1][0] ;
                shiduan[j+1][0] = temp1 ;

                int temp = shiduan[j][1] ;
                shiduan[j][1] = shiduan[j+1][1] ;
                shiduan[j+1][1] = temp ;
            }
        }
    }

    for ( i = 0 ; i < k ; i ++ )
    {
        printf("%.1f %d\n" , shiduan[i][0] , shiduan[i][1] ) ;
    }
}