//mergesort

#include <stdio.h>
#include <stdlib.h>

//对于两个有序数组，进行合并
void merge ( int arr[] , int left , int middle , int right )
{
    //temp拷贝所有数据
    int *temp = (int*) calloc ( right - left + 1 , sizeof (int) ) ;
    for ( int i = left ; i <= right ; i ++ )
    {
        temp[i-left] = arr[i] ;
    }

    int current = left ;
    int current1 = 0 ;
    int current2 = middle + 1 - left ;
    while ( current1 <= middle - left && current2 <= right - left )
    {
        if ( temp[current1] <= temp[current2] )
        {
            arr[current] = temp[current1] ;
            current ++ ; 
            current1 ++ ;
        }

        else
        {
            arr[current] = temp[current2] ;
            current ++ ; 
            current2 ++ ;
        }
    }

    if ( current1 > middle - left )
    {
        while ( current2 <= right - left )
        {
            arr[current] = temp[current2] ;
            current ++ ; 
            current2 ++ ;
        }
    }

    if ( current2 > right - left )
    {
        while ( current1 <= middle - left )
        {
            arr[current] = temp[current1] ;
            current ++ ; 
            current1 ++ ;
        }
    }

    free (temp) ;
}

//分解大数组，直到全为单个元素之后再merge合并
void mergesort ( int arr[] , int left , int right )
{
    if ( left >= right )
    {
        return ;
    }
    
    int middle = left + ( right - left ) / 2 ;
    mergesort ( arr , left , middle ) ;
    mergesort ( arr , middle + 1 , right ) ;

    merge ( arr , left , middle , right ) ;


}

void printarr ( int arr[] , int len )
{
    for ( int i = 0 ; i < len ; i ++ )
    {
        printf ("%d " , arr[i] ) ;
    }
    printf ("\n") ;
}


int main()
{

    int arr[] = { 56 , 48 , 81 , 34 , 87 , 65 , 15 } ;
    int len = sizeof (arr) / sizeof ( arr[0] ) ;

    printarr ( arr , len ) ;

    mergesort ( arr , 0 , len - 1 ) ;

    printarr ( arr , len ) ;

}