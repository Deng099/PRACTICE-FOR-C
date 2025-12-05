//重做班会时间
//看c的书，感觉函数还要再练练
//problem list 搞起来

//开始递归
/*
递归

n皇后问题
*/
#include <stdio.h>
#include <stdbool.h>

#define N 6

int solutionCount = 0 ;

//在打印棋盘，if board[i][j] = 1 就放置皇后，其他位置放. 
void printSolution (int board[N][N] )
{
    int i , j ;
    for ( i = 0 ; i < N ; i ++ )
    {
        for ( j = 0 ; j < N ; j ++ )
        {
            if ( board[i][j] )
            {
                printf ("Q ") ;
            }
            else
            {
                printf (". ") ;
            }
        }
        printf ("\n" ) ;
    }
    printf ("\n" ) ;
    solutionCount ++ ;

}

//检查是否安全
bool isSafe ( int board[N][N], int row , int col )
{
    int i , j ;

    //如果 列col 存在board[i][col] = 1 ，return false
    for( i = 0 ; i < row ; i ++ )
    {
        if ( board[i][col] )
        return false ;
    }

    //如果在 board[row][col] 左上对角线 存在board[i][col] = 1 ，return false
    for ( i = row , j = col ; i >= 0 && j >= 0 ; i-- , j--)
    {
        if ( board[i][j] )
        return false ;
    } 
    //如果在 board[row][col] 右上对角线 存在board[i][col] = 1 ，return false
    for ( i = row , j = col ; i >= 0 && j < N ; i-- , j++)
    {
        if ( board[i][j] )
        return false ;
    } 

    //如果条件都满足，return true
    return true ;
}


void solveNqueen ( int board[N][N] , int row )
{
    //边界条件：row >= N 就打印
    if ( row >= N )
    {
        printSolution( board ) ;
        return ;
    }

    //对于某一行，遍历col.   如果safe ，在board[row][col]放皇后
    for ( int col = 0 ; col < N ; col ++ )
    {
        
        if ( isSafe ( board , row , col ) )
        {
            //如果目前safe ，放皇后
            board[row][col] = 1 ;
            
            //继续在下一排尝试放皇后，递归
            solveNqueen( board , row + 1 ) ;     
            //如果顺利，就会一直递归，直到row>=N
            //如果所有列都不safe，在下一行进行for循环都不进入if板块，没有进行操作，返回到这里
            //关键！！进行撤销操作
            //如果没法找到safe位置，就取消刚刚放的皇后
            board[row][col] = 0 ;
        }   
    }
}

int main()
{
    int board[N][N] = {0} ;
    solutionCount = 0 ;
    solveNqueen ( board , 0 ) ;
}