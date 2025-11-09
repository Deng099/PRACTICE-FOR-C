//两个数

//version1
/*
在 input(num1, num2) 这个函数调用中，C语言使用的是值传递。这意味着：
当调用 input(num1, num2) 时，只是把 num1 和 num2 的值复制给了函数参数 a 和 b 
在 input 函数中，scanf 修改的是局部变量 a 和 b 的值
当函数结束时，局部变量 a 和 b 被销毁，main 函数中的 num1 和 num2 没有被修改*/
#include <stdio.h>
int output ( int a , int b )
{
    return a + b ;
}
int main()
{
    int num1 , num2 ;
    scanf ("%d%d" , &num1 , &num2 ) ;
    int result = output ( num1 , num2 ) ;
    printf ("%d" , result ) ;
}


//version2
#include <stdio.h>
int output ( int a , int b ) ;
int main()
{
    int a , b ;
    scanf ("%d%d" , &a , &b ) ;
    printf ("%d" , output ( a , b )) ;
}
int output ( int a , int b )
{
    int result = a + b ;
    return result ;
}


//多个数的加法
#include <stdio.h>
double duogeadd( int a ) ;
int main()
{
    int geshu ;
    scanf ("%d" , &geshu ) ;
    double result = duogeadd( geshu ) ;
    printf ("%lf" , result ) ;
}

double duogeadd( int a )
{
    int i ;
    double num , sum = 0 ;
    for ( i = 0 ; i < a ; i ++ )
    {
        scanf ("%lf" , &num ) ;
        sum += num ;
    }
    return sum ;

}