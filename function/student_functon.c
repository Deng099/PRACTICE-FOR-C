//结构体,输入student并计算平均值等等
#include <stdio.h>
#include <stdlib.h>

//typedef 可以放到所有函数之外！
typedef struct
{
    int xuehao ;
    char name[50] ;
    float math ;
    float english ;
}Student;

Student input_student () ;
Student average ( Student list[10] ) ;
void print_Student ( Student a ) ;

int main()
{
    int i ;
    Student list[10] ;
    for ( i = 0 ; i < 10 ; i++)
    {
        list[i] = input_student () ;
    }
    Student overall = average ( list ) ;
    for ( i = 0 ; i < 10 ; i++)
    {
        print_Student ( list[i] ) ;
    }
    print_Student ( overall ) ;

}
//输入单个学生的信息
//在输入中，如果写void无输出的话要用指针；替代方案，输出Student
/*
问题所在：值传递（Pass by Value）
当调用 input_student(list[i]) 时：C语言把 list[i] 的完整副本传递给函数
scanf 修改的是这个副本的字段
函数结束时，副本被销毁
main 函数中的 list[i] 完全没有被修改*/

Student input_student ()
{
    Student a ;
    scanf ("%d%s%f%f" , &a.xuehao , &a.name , &a.math , &a.english ) ;
    return a ;
}

//计算平均数，返回类型为student的统计值
Student average ( Student list[10] )
{
    float average_math = 0 ;
    float average_english = 0 ;
    int i ;
    for ( i = 0 ; i < 10 ; i ++) 
    {
        average_math += list[i].math ;
        average_english += list[i].english ;  
    }
    average_math /= 10 ;
    average_english /= 10 ;  
    Student overall = { 0 , "all" , average_math , average_english } ;
    return overall ;
}

//打印
void print_Student ( Student a )
{
    printf ("%d%s%f%f\n" , a.xuehao , a.name , a.math , a.english ) ;
}
