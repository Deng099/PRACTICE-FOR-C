//字符串排序

#include <stdio.h>
#include <string.h>

void rank( char *p[] , int len ) ;

int main()
{
    char *p []= { "hello" , "jeifo" , "wdojo" , "oqjnv" , "ajiocn" } ;
    /*

    p 类型: char **, 值: 指针数组的地址 (比如 0x1000)
    *p // 类型: char *,  值: 第一个字符串的地址 (比如 0x2000 - "hello"的地址)
    *(p+1) // 类型: char *,  值: 第二个字符串的地址 (比如 0x2006 - "world"的地址)
    
    */
    int len = sizeof (p) / sizeof (p[0]) ;     //不要指定数组大小

    rank( p , len ) ;

    for ( int i = 0 ; i < len ; i++ )
    {
        printf ("%s\n" , p[i]) ;   //printf想要的就是地址！
    }
    
}

void rank( char *p[] , int len )
{
    int i , j ;
    for ( i = len - 1 ; i > 0 ; i -- )  // i 是 n - 1 !
    {
        for ( j = 0 ; j < i ; j++ )
        {
            if ( strcmp( p[j] , p[j+1] ) > 0 )    
            {
                //注意理解：p[]是指针数组，p[i] 的值是地址
                //所以实际上是把地址交换赋给指针
                char *temp = p[j] ; 
                p[j] = p[j+1] ;
                p[j+1] = temp ;
            }
        }
    }

}

//另一种打印的方法
void print(char *p[] )
{
    char **i ;
    for ( i = p ; i < p + 5 ; i ++ )
    {
        printf ("%s\n" , *i ) ;
    }
} 