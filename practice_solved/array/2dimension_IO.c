//二维数组的输入， 以图表输出
#include <stdio.h>
int main()
{
    int mark[4][4] ;
    int i , j ;
    
    for ( i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j ++)
        {
            printf ("please input number%d:" , i*4 + j + 1 ) ;
            scanf ("%d" , &mark[i][j] ) ;
        }
    }
    
    for ( i = 0 ; i < 4 ; i++)
    {
        for ( j = 0 ; j < 4 ; j ++)
        {
            printf("%d\t" , mark[i][j] ) ;
        }
        printf ("\n");
    }
    return 0 ;
}