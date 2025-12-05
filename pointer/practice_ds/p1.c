#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
    int pages;
};

// 你的任务：完成以下函数
void printBooks(struct Book *books, int count) {
    // TODO: 打印所有图书信息

    for ( int i = 0 ; i < count ; i ++ )
    {
        printf ("%s %s %f %d\n" , (books+i)->title , (books+i)->author , (books+i)->price , (books+i)->pages ) ;
    }

}

float findAveragePrice(struct Book *books, int count) {
    // TODO: 计算并返回平均价格

    float sum = 0 ;  //记得初始化！！

    struct Book *current = books ;
    struct Book *end = books + count ;
    
    while ( current < end )
    {
        sum += current->price ;
        current ++ ;
    }

    return (sum/count);
}

struct Book* findMostExpensive(struct Book *books, int count) {
    // TODO: 找到并返回最贵图书的指针
    struct Book *highPrice = books ;

    for ( int i = 0 ; i < count ; i ++ )
    {
        if (( (books+i)->price ) >( (highPrice)->price ))
        {
            highPrice = books + i ;
        }
    }

    return highPrice ;
}

int main() {
    struct Book library[4] = {
        {"C Programming", "K&R", 45.5, 274},
        {"Data Structures", "Weiss", 68.0, 456},
        {"Algorithms", "Cormen", 85.0, 1312},
        {"Operating Systems", "Tanenbaum", 75.5, 1104}
    };
    
    int count = 4;
    
    // 测试你的函数
    printBooks(library, count);
    printf("平均价格: %.2f\n", findAveragePrice(library, count));
    
    struct Book *expensive = findMostExpensive(library, count);
    if (expensive != NULL) {
        printf("最贵的书: %s, 价格: %.2f\n", expensive->title, expensive->price);
    }
    
    return 0;
}