//yoj247

/*
输入：成组，一个号码，一个数字 都按string读取算了

输出 能够匹配号码的(如何逐个填充？) 比数字大的(用strcmp判断) 个数 

输入样例
36?1?8 
236428 

8?3 
910 

? 
5 
#

输出样例
100 

0

4

*/

/*
卡壳点

没有把else考虑进去，如果不是'?'就直接跳过到solve+1

回填'?'，才能全排列

*/

#include <stdio.h>
#include <string.h>

void solveWild ( char str[] , char num[] , int weishu ) ;

int mark = 0 ;

int main()
{
    char wild[10] , num[10] ;
    int c ;
    while (1)
    {
        mark = 0 ; //记得重置mark
        scanf ("%s" , wild ) ;
        if ( strcmp ( wild , "#") == 0 )
        {
            break ;
        }

        scanf ("%s" , num ) ;

        solveWild ( wild , num , 0 ) ;

        printf ("%d\n" , mark ) ;
    }


}

//处理wild

void solveWild ( char str[] , char num[] , int weishu )
{
    if ( weishu >= strlen(str) )
    {
        mark += ( strcmp( str , num ) > 0 ? 1 : 0 ) ;
        return ;
    }
    
    if ( str[weishu] == '?' )
        {
            for ( int j = 0 ; j <= 9 ; j ++ )
            {
                str[weishu] = j + '0' ;
                
                solveWild ( str , num , weishu + 1 ) ;

                str[weishu] = '?' ;   
                //这样就对上一个问号又进行一轮填充，才能完全全排列
            }
        }
    
    else 
    {
        solveWild ( str , num , weishu + 1 ) ;
    }
    
}

