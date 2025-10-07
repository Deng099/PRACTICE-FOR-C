//乘法表，只有右上半个
#include <stdio.h>
int main()
{
    int i ,j ,k ;
    for ( i = 1 ; i <= 9 ; i++ )
    {
        
        for (k = 1 ; k < i ; k++)
        {
            printf("________\t") ;
        }
        for ( j = i ; j <= 9 ; j ++)
        {
            printf("%d*%d = %2d\t", i , j , i*j );
        }
        
        printf("\n") ;

    }
    printf("\n") ;
}

//积累：初始化的时候可以从 j = i 开始