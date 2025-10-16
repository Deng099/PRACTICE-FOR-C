//矩阵的乘法
#include <stdio.h>
int main()
{
    int i , j ;
    int mark1[3][3] , mark2[3][3] , mark3[3][3];
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            printf(" matrix1 , row %d , col %d :" , i + 1 , j + 1) ;
            scanf ("%d" , &mark1[i][j]) ;
        }
    }
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            printf(" matrix2 , row %d , col %d :" , i + 1 , j + 1) ;
            scanf ("%d" , &mark2[i][j]) ;
        }
    }
    int count = 0 ;
    for ( i = 0 ; i < 3 ; i++)
    {
        for ( j = 0 ; j < 3 ; j++)
        {
            mark3[i][j] = 0 ;
            for ( count = 0 ; count < 3 ; count ++)
            {
                mark3[i][j] += mark1[i][count] * mark2[count][j] ; 
            }
            printf ("%d\t" , mark3[i][j] ) ;
        }
        printf ("\n");
    }
    return 0 ;
}