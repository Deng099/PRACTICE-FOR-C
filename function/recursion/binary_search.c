//二分查找（加冒泡排序，优化）
//冒泡排序，函数版

#include <stdio.h>
#define SIZE 20

void bubble ( int mark[] ) ;
int check ( int mark[] , int num , int left , int right )  ;

int main()
{
    int count = 0 ;

    //先定义随机数组
    int mark[100] = {45,98,3,5,52,2,8,6,59,4,7,15,35,65,458,564,97,67,39,72};

    bubble ( mark ) ;
    
    //输入要查找的数
    int num ;
    scanf ("%d" , &num ) ;
    
    printf ( "%s" , check( mark , num , 0 , SIZE - 1 ) ? "found" : "not found" ) ;
    
}


//冒泡排序
void bubble ( int mark[] )
{
    int count , count1 , temp ;
    for ( count1 = SIZE - 1 ; count1 > 0 ; count1 -- )
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


//不要使用全局变量，比如int left = 0 , right = 19 ;在多次调用的时候，left等等的值已经被改变

//灵活一点，可以用到多个参数！只要在变化并且下次要利用变化的值，就放到参数里面来！
int check ( int mark[] , int num , int left , int right ) 
{
    if ( left > right )
    {
        return 0 ;
    }
    int middle = ( left + right ) / 2 ;
    if ( num == mark[middle] )
    {
        return 1 ;
    }
    else if ( num > mark[middle] )
    {
        left = middle + 1 ;
        return check (mark , num , left , right ) ;
    }
    else
    {
        right = middle - 1 ;
        return check (mark , num , left , right ) ;
    }
}