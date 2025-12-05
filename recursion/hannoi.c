//汉诺塔
#include <stdio.h>
void hannoi( int n , char start , char temp , char end ) ;
int main()
{
    int n ;
    scanf ("%d" , &n ) ;
    hannoi ( n , 'A' , 'B' , 'C' ) ; 
}

void hannoi( int n , char start , char temp , char end )
{
    if ( n == 1 )
    {
        printf ( "move disk%d from %c to %c\n" , n , start , end ) ;
    }
    if ( n != 1 )
    {
        hannoi ( n - 1 , start , end , temp ) ;  //先把disk1到disk n-1 从start移到temp
        printf ( "move disk%d from %c to %c\n" , n , start , end ) ;//把disk n从start移到end
        hannoi ( n - 1 , temp , start , end ) ;  ////最后把disk1到disk n-1 从temp移到end
    }
}