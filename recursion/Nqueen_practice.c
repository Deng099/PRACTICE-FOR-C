//N皇后问题



#include <stdio.h>
#include <stdbool.h>

#define N 6

void printboard ( int board[N][N] ) ;
bool isSafe ( int board[N][N] , int row , int col ) ;
void solveNqueen ( int board[N][N] , int row ) ;

int solution = 0 ;

int main()
{
    int board[N][N] = {0} ;
    
    solveNqueen ( board , 0 ) ;
}

void printboard ( int board[N][N] )
{
    printf ("%d\n" , solution + 1 ) ;

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
        printf ("\n") ;
    }

    printf ("\n") ;
   
}

bool isSafe ( int board[N][N] , int row , int col )
{
    int i , j ;
    for ( i = 0 ; i < row ; i ++ )
    {
        if ( board[i][col] )
        {
            return false ;
        }
    }

    for ( i = col , j = row ; i >= 0 && j >= 0 ; i -- , j -- )
    {
        if ( board[j][i] )
        {
            return false ;
        }
    }

    for ( i = col , j = row ; i < N && j >= 0 ; i ++ , j -- )
    {
        if ( board[j][i] )
        {
            return false ;
        }
    }

    return true ;

}




void solveNqueen ( int board[N][N] , int row )
{
    if ( row >= N )
    {
        printboard ( board ) ;
        solution ++ ;
        return ;
    }

    int col = 0 ;
    for ( col = 0 ; col < N ; col ++ )
    {
        if ( isSafe ( board , row , col ) )
        {
            board[row][col] = 1 ;

            solveNqueen ( board, row + 1 ) ;

            board[row][col] = 0 ;
        }
    }
}