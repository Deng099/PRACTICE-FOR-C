#include <stdio.h>

// 已有的数学函数
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

typedef int (*mathOperation) (int , int) ;
//typedef的规则：把这个东西的类型原模原样写上去就可以
//这个类型的东西都是函数指针
int calculate(int a , int b , mathOperation operation) 
//在函数参数里，函数指针后面只用跟参数类型
//回调函数：calculate函数不知道具体执行什么操作，由调用者通过函数指针决定
{
    return operation(a,b) ;
}

int main() 
{
    int result = calculate(5, 3, add);
    printf("5 + 3 = %d\n", result);
    
    return 0;
}