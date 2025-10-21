
//一维
#include <stdio.h>
int main()
{
    //字符串初始化
    char str[5] = "abcd" ;
    //注意：不能整体赋值！！
    //实际上，str是数组名，它代表整个数组在内存中的首地址，是固定的。（常量）
    //错误案例：
    char str[100] ;
    str[100] = "abcd" ; 
    //赋值:利用strcpy()或for循环

    //输入
    char a[64] ;
    scanf ("%s" , a ) ;//遇到空格就停止
    gets( a ) ;//取得整行文本
    //输出
    printf ( "%s" , str ) ;
    puts(str) ;
}
