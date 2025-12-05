/*
yoj289
游戏有 n 个回合，每个回合开始，作为裁判的轩轩给出 a,b,c,d,e,x 的值，游戏双方蓬蓬和凯凯各自去计算多项式的值，并给出自己的答案，
答对者得1分；
当某一方连续回答对 k 道题后，有加分奖励，即连续回答对第 k+1 题时，除了获得答对题目得到的1分，还会奖励1分，
连续答对 k+m 道题时，除了答对题目的1分，还会奖励m分。请你计算游戏结束时，蓬蓬和凯凯的得分。

输入格式
　　输入共n+1行。 　　
第1行是两个正整数 n,k。n 表示游戏的回合数，k的含义如游戏规则所示。 　　
第2行到第n+1 行，每行 8 个整数，分别表示 a,b,c,d,e,x 和蓬蓬的答案ans1 和凯凯的答案 ans2

输出格式
　　输出只有一行，包含两个整数，分别表示蓬蓬和凯凯的得分，之间用一个空格分割。

输入样例
2 1

1 1 1 1 1 2 31 30

2 3 4 5 10 0 10 10

输出样例
3 1

特殊提示
　　n的范围(0, 1000], k的范围[0, 100] 0≤|a|,|b|,|c|,|d|,|e|,|x|≤100 0≤|ans1 |,|ans2 |≤10^9
*/



#include <stdio.h>
#include <math.h>

int score( int right[1000] , int n , int k ) ;

int main()
{
    int n , k ;
    scanf ("%d%d" , &n , &k ) ;
    int right1[1000] , right2[1000] ; 


    int i = 0 ;
    for ( i = 0 ; i < n ; i ++ )
    {
        int a , b , c , d , e , x ;
        long long int ans1 , ans2 ;
        scanf ( "%d%d%d%d%d%d%lld%lld" , &a,&b,&c,&d,&e,&x, &ans1, &ans2) ;

        //判断答案是否正确，正确就写1，不正确就写0
        int answer = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e ;

        right1[i] = ( answer == ans1 ) ? 1 : 0 ;

        right2[i] = ( answer == ans2 ) ? 1 : 0 ;

    }

    int score1 = score ( right1 , n , k ) ;
    int score2 = score ( right2 , n , k ) ;

    printf ("%d %d" , score1 , score2 ) ;

    
}

int score( int right[1000] , int n , int k )
{

    int bonus[1000] = { 0 } ;
    
    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( right[i] == 1 )
        {
            int num = 0 ;
            int j ;
            for ( j = i ; j < n ; j ++ )
            {
                if ( right[j] != 1 )
                {
                    
                    break ;
                }
                num ++ ;
                bonus[j] = num - k ;                
            }
            i = j - 1 ;
        }

    }
    
    int score = 0 ;
    for ( int i = 0 ; i < n ; i ++ )
    {        
        if ( bonus[i] < 0 )
        {
            bonus[i] = 0 ;
        }
        score += ( right[i] + bonus[i] ) ;
    }
    return score ;
}

