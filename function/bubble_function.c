//冒泡排序，函数版

#include <stdio.h>


void bubble ( int mark[] , int n ) ;



int main()
{
    int count = 0 ;
    int n ;
    scanf ("%d" , &n ) ;
    int mark[100] ;

    //输入数据到数组
    for ( count = 0 ; count < n ; count ++ )
    {
        scanf ( "%d" , &mark[count] ) ;
    }

    bubble ( mark , n ) ;
    for ( count = 0 ; count < n ; count ++ )
    {
        printf ("%d " , mark[count] ) ;
    }

}


//冒泡排序
void bubble ( int mark[] , int n )
{
    int count , count1 , temp ;
    for ( count1 = n - 1 ; count1 > 0 ; count1 -- )
    {
        for ( count = 0 ; count < count1 ; count ++ )
        {
            if ( mark[count] > mark[count + 1] )
            {
                temp = mark[count] ;
                mark[count] = mark[count + 1] ;
                mark[count + 1] = temp ;
            }
        }
    }    
}
