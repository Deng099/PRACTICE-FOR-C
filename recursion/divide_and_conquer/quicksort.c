//quicksort

#include <stdio.h>
#include <stdlib.h>

void exchange ( int *x , int *y )
{
    int p = *x ;
    *x = *y ;
    *y = p ;
}

//现在要干的：以某一个序列的第一个为基准，分块（找到一个大的和一个小的），再把第一个调到该去的位置上
int pivot ( int arr[] , int left , int right )
{
    int start = left ;
    int end = right ;

    while ( left < right )
    {
        while ( arr[right] >= arr[start] && right > left )
        {
            right -- ;
        }

        while ( arr[left] <= arr[start] && left < right )  
        //right更新了新值，要再次保证边界条件！
        {
            left ++ ;
        }


        if ( left < right )         //这样检验一下，就交换
        {
            exchange ( &arr[left] , &arr[right] ) ;
        }
        
    }

    
    exchange ( &arr[start] , &arr[right] ) ;
    return right ;
}

void quicksort ( int arr[] , int start , int end )
{
    //别忘了递归的边界条件！！
    if ( start < end )
    {
        int i = pivot ( arr , start , end ) ;

        quicksort ( arr , start , i - 1 ) ;
        quicksort ( arr , i + 1 , end ) ;
    }
    
}

void printarray ( int arr[] , int len )
{
    for ( int i = 0 ; i < len ; i ++ )
    {
        printf ("%d " , arr[i] );
    }

    printf ("\n") ;
}


int main()
{

    int len ;
    scanf ("%d" , &len ) ;

    int *arr = calloc ( len , sizeof ( arr[0] ) ) ;
    for ( int i = 0 ; i < len ; i ++ )
    {
        scanf ("%d" , &arr[i] ) ;
    }
    
    //输入完成

    printf ("before:") ;
    printarray ( arr , len ) ;

    quicksort ( arr , 0 , len - 1 ) ;

    printf ("after:") ;
    printarray ( arr , len ) ;

    free(arr) ;
}