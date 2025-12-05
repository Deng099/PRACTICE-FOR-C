/*
练习4：使用typedef简化
使用typedef来简化函数指针的声明，实现字符串处理功能。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 你的任务：使用typedef定义字符串处理函数的类型
// 提示：这种函数应该接受const char*参数，返回void

void printString(const char* str) {
    printf("字符串: %s\n", str);
}

void printUpperCase(const char* str) {
    printf("大写: ");
    for (int i = 0; str[i]; i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

void printLength(const char* str) {
    printf("长度: %zu\n", strlen(str));
}

typedef void (*funcString) ( const char *) ;


// 处理字符串的函数
void processString(const char* str, funcString processor) {
    // 你的代码：调用处理函数

    processor (str) ;        //在接口里，按照选择的函数处理参数即可
    
    //相当于对所有的“工具”总结，都是通过这个工具去处理你的函数参数

}

int main() {
    char text[] = "Hello, Function Pointer!";
    
    // 你的代码：使用processString函数，分别用三个处理函数处理文本
    
    processString ( text , printString ) ;
    processString ( text , printUpperCase ) ;
    processString ( text , printLength ) ;



    return 0;
}