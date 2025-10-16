//斐波那契，前20个数
#include <stdio.h>
int main()
{
    int mark[20] ;
    int i , j ;
    mark[0] = 1 , mark[1] = 1 ;
    printf("1\n1\n");
    for ( i = 2 ; i < 20 ; i++ )
    {
        mark[i] = mark[i-1] + mark[i-2];
        printf ("%d\n" , mark[i] ) ;
    }
    return 0 ;
}