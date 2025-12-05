//最小公倍数
#include <stdio.h>
int main()
{
    int a , b , c , d ;
    scanf ("%d %d", &a , &b ) ;
    c = a , d = b ;
    while (c != d)
    {
        if (c < d) 
            c+=a ;
        else 
            d+=b ;
    }
     
         
        printf("%d",c);
return 0 ;

}