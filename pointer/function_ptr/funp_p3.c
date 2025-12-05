#include <stdio.h>

void option1() { printf("执行选项1打开文件\n"); }
void option2() { printf("执行选项2保存文件\n"); }
void option3() { printf("执行选项3退出程序\n"); }

int main() {
    // 你的任务：
    // 1. 声明一个函数指针数组，包含3个元素
    // 2. 用三个选项函数初始化这个数组
    
    typedef void (*func)() ;


    func option[3] = { option1 , option2 , option3 } ;
    /*在C语言中，函数名本身就代表函数的地址，所以以下两种写法是等价的：

    option[0] = option1;      // 直接使用函数名
    option[0] = &option1;     // 使用取地址符
    
    // 这两种调用方式也完全等价
    option[0]();      // 直接调用
    (*option[0])();   // 解引用后调用*/



    int choice;
    
    while (1) {
        printf("\n菜单\n");
        printf("1. 打开文件\n");
        printf("2. 保存文件\n"); 
        printf("3. 退出\n");
        printf("请选择(1-3): ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 3) {
            // 你的代码：通过函数指针数组调用对应的函数

            
            if (choice == 3) break; // 选项3退出循环

            else 
            {
                option[choice-1] ();  //无输入的函数，调用要加()
            }


        } else {
            printf("无效选择！\n");
        }
    }
    
    return 0;
}