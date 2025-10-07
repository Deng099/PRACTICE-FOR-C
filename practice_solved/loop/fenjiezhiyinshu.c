//分解质因数
#include <stdio.h>
int main ()
{
    int i , j ;
    scanf ("%d", &i );
    for ( j = 2 ; j <= i ; j++)
    while (1)
    {
    if (i % j == 0 )
    {
        printf ("%d ", j );
        i = i / j ;   
    }
    else
    break ;
    }
}
//一般不考虑 1 ，emm但是为了逻辑严谨（？）可以加一个，输出“无”