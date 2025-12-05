#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *c1 = "hello" ; //c1指向字符串
    char *c2 = "hello" ; //c2指向字符串

    printf ("%p\n%p\n" , c1 , c2 ) ;
    //发现 c1 和 c2 指向同一个地方：字符串
    //字符串位于只读代码段，所以不能修改。
    //实际上，c1和c2是const char 指针。比如 *c1 = 'H' ,会运行错误
    //如果想要修改，用数组;要处理字符串，用指针



    char *p = "Hello" ;
    char *q = p ;        //让q也指向和p一样的地方
    printf ("%s\n" , q ) ; //注意！%s想要的是地址，而不是值！！所以不要用*q

    //printf 本身也是函数，需要副本来进行值传递。
    //其他%d等等直接return即可，但是数组需要地址来间接访问

    char *s = NULL ;  //好习惯：指针初始化为NULL！！
    s = malloc(100) ; //再分配动态内存(数据少，用数组更加方便)
    scanf ("%s" , s ) ;
    printf ("%s\n" , s ) ;
    free(s) ;//最后记得free

    char buffer[100] = "" ;    //buffer[0] = '\0' 
    char buffer[] = "" ; //数组长度为1
}