/*
coconut二战错误总结
no.1  改变了n值，未用备份值
no.2  scanf没写 & （这真的太蠢。。。）
no.3  done等变量的初始化   位置又放错了
no.4  循环里的优化：done 一旦等于 1 就退出，节省算力
no.5  printf 又放错位置了。。。

总结：备份，循环中变量的初始化，输出语句在循环中的位置。
*/
#include<stdio.h>
int main()
{
    int n , temp ;
    int count , renshu ;
    int done = 0 , done1 = 0;
    while ( 1 )
    {
        scanf ("%d" , &n ) ;  //no.2
        if ( n != 0 ) 
        {
        
            for ( renshu = n - 1 ; renshu > 1 ; renshu --)
            {
                temp = n ; //  no.1
                count = 1 , done1 = 0 ;
                for( count = 1 ; count <= renshu ; count ++)
                {
                    done = 0 ;  //  no.3
                    if ( (temp-1) % renshu == 0)
                    {
                        temp = ( temp - 1 ) / renshu * ( renshu - 1 );    //易错：对n进行了改变 ！！用temp进行运算！！
                    }
                    else
                    {
                        done = 1 ; //  no.4
                        break ;
                    }
                }
                if ( done == 0 && temp % renshu == 0 )
                {
                    done1 = 1 ;
                    printf ( "%d\n" , renshu ) ; //  no.5
                    break ;
                }
            
            }
            if ( done1 == 0 )
            printf ( "no solution\n" ) ;
        }
        else 
        break ;
    }
    return 0 ;
}