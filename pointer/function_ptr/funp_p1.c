#include <stdio.h>



int add (int a , int b){ return a + b ;}
int multiply(int a , int b){ return a * b ;}

int main()
{
    int a = 9 , b = 10 ;
    
    int (*p) (int,int) ;
    //函数指针不用写a，b，只用跟类型
    p = add ;
    int c = p ( a, b ) ; //这个形式，简洁
    p = multiply ;
    int d = p ( a, b ) ;
}