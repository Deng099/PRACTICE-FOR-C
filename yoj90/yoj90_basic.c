//再练
/*
输入格式：
题数 题号
学生数 要的前k名（所有并列的都输出，且记为一个名次）
学号（8位）  题目数量   题号
输出：
“学号 ”
*/
#include <stdio.h>
int main()
{
    int all_tishu , tihao[100] ;
    int i ;
    scanf("%d" , &all_tishu ) ;
    for ( i = 0 ; i < all_tishu ; i++) 
    {
        scanf ("%d" , &tihao[i] ) ;
    }
    //现在已经把要求的题号存入tihao[]当中

    int num , k , zuode_num[100] , zuode[100][100] ;
    long long xuehao[100] ;
    int j ; 
    scanf ("%d%d" , &num , &k ) ;
    for ( i = 0 ; i < num ; i ++ )
    {
        scanf ("%lld%d" , &xuehao[i] , &zuode_num[i] ) ;
        for ( j = 0 ; j < zuode_num[i] ; j++ )
        {
            scanf ("%d" , &zuode[i][j] ) ;
        }
    }
    //把学号存入xuehao[i] , 做的题号存入zuode[i][]
    //现在开始处理数据，统计正确题数。
    int right_num[100] ;
    for ( i = 0 ; i < 100 ; i++) 
    {
        right_num[i] = 0 ; 
    }
    //完成初始化
    int p ;
    for ( i = 0 ; i < num ; i ++ )  //对于每个学生
    {
        for ( j = 0 ; j < zuode_num[i] ; j ++ )  //对于每个做的题号
        {
            for ( p = 0 ; p < all_tishu ; p ++ )  //对于每个要求的题号
            {
                if ( zuode[i][j] == tihao[p] )
                {
                    right_num[i] ++ ;
                    break ;
                }
            }
        }
    }
    //把每个学生正确的题数存进right_num[]
    //现在排序，试着用新学的函数？参数是right_num[] , 这样可用吗？Question
    //先用循环试一下
    //与每一个比对，如果大于就print，然后把right_num 改成0
    int max = -1 , count ;
    long long tongfen[100] ;
    int count1 = 0 ;
    for ( count = 0 ; count < k ; count ++ )
    {   
        max = 0 ;
        for ( i = 0 ; i < num ; i ++ )
        {
            if ( right_num[i] > max )
            {
                max = right_num[i] ;
            }
        }
        if ( max == -1 )
        {
            break ;
        }
        //忽略的点！！如果全部清除完毕，退出循环
        count1 = 0 ;    
        for ( i = 0 ; i < num ; i ++ )
        {
            if ( right_num[i] == max )
            {
                tongfen[count1] = xuehao[i] ;
                count1 ++ ;                
                right_num[i] = -1 ;
            }
            //把同分学号的存入tongfen[]，共 count1 个，并把这些值在right_num里都改成-1
            
            
        }
        //现在写输出部分；同分的需要学号小的在前,冒泡排序。
        int a = 0 , b ;
        long long temp ;
        for ( b = count1 ; b > 0 ; b -- )
        {
            for ( a = 0 ; a < b - 1 ; a ++ )
            {
                if ( tongfen[a] > tongfen[a + 1] )
                {
                    temp = tongfen[a + 1] ;
                    tongfen[a + 1] = tongfen[a] ;
                    tongfen[a] = temp ;
                }
            }
        }
        for ( a = 0 ; a < count1 ; a ++ )
        {
            printf ("%lld " , tongfen[a] ) ;
        }
    }
    
}
