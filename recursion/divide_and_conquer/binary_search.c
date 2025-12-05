//二分查找，只对于有序数组

#include <stdio.h>
#include <stdbool.h>

bool binary_search ( int arr[] , int left , int right , int target )
{
    if ( left > right )
    {
        return false ;
    }

    int middle = left + ( right - left ) / 2 ;

    if ( arr[middle] == target )
    {
        return true ;
    }
    else if ( target > arr[middle] )
    {
        return binary_search ( arr , middle + 1 , right , target ) ;
    }
    else
    {
        return binary_search ( arr , left , middle - 1 , target ) ; //已经检查过middle，middle-1作为边界 
    }
    
}



int main()
{
    int arr[] = { 1 , 34 , 45 , 49 ,  64 , 69 , 89 , 799 } ;
    int len = sizeof (arr) / sizeof (arr[0]) ;

    //读入目标
    int target ; 
    scanf ("%d" , &target ) ;

    if ( binary_search ( arr , 0 , len-1 , target ) )
    {
        printf ("found") ;
    }

    else
    {
        printf ("not found") ;
    }


}