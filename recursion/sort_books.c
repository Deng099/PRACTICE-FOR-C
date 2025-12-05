/*
有5个人，以及有5本书
每个人喜欢的书不一样
请给出分配方案
*/

#include <stdio.h>
#include <stdbool.h>

const int like[5][5] = {
    {0, 0, 1, 1, 0},  // 0号人喜欢书2、3
    {1, 1, 0, 0, 1},  // 1号人喜欢书0、1、4
    {0, 1, 1, 0, 1},  // 2号人喜欢书1、2、4
    {0, 0, 0, 1, 0},  // 3号人喜欢书3
    {0, 1, 0, 0, 1}   // 4号人喜欢书1、4
};

int book[5] = { -1 , -1 , -1 , -1 , -1 } ;

void printSolution() ;
bool isSafe(int book[5] , int personnum , int booknum ) ;
void sortBook ( int book[5] , int personnum ) ;


int main()
{
    int personnum = 0 ;
    sortBook ( book , 0 ) ;
}



void printSolution()
{
    int i = 0 ; 
    for ( i = 0 ; i < 5 ; i ++ )
    {
        printf ("book%d     person%d \n" , i , book[i] ) ;
    }
    printf ("\n") ;
}


bool isSafe(int book[5] , int personnum , int booknum )
{
    if ( like[personnum][booknum] == 0 )
    {
        return false ;
    }

    if (book[booknum] != -1 )
    {
        return false ;
    }

    return true ;
}



void sortBook ( int book[5] , int personnum )  //对每个人分书，把personnum登记到book[]中
{
    if ( personnum >= 5 )
    {
        printSolution() ;
        return ;
    }

    int i , j ; 
    for ( i = 0 ; i < 5 ; i ++ ) //书：i
    {
        if ( isSafe( book , personnum , i ) )
        {
            book[i] = personnum ;

            sortBook( book , personnum + 1 ) ;

            book[i] = -1 ;
        }
    }

}