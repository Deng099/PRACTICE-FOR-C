//sprintf
#include <stdio.h>
int main()
{
    //字符串例如“345”转换成可用于计算的整数
    char combine[100] ;
    float height = 1.6 ;
    char name[10] = "Cindy" ;
    
    sprintf (combine , " MY NAME IS %s , my height is %.1f meters. \n" , name , height ) ;
    printf ("%s" , combine ) ;

    //将数字转换为字符串
    int a = 123 ;
    char num[10] ;
    sprintf (num , "the number is %d. " , a ) ;
    printf ("%s" , num ) ;
}
//sscanf 
#include <stdio.h>
int main()
{
    char a [10], b [10] , c [10] , d [10] ;
    float i ;
    char sentence[100] = "my name is Dawn, height is 1.6 . " ;
    sscanf ( sentence , "%f" , &i ) ; //失败，因为字符串开头是 "my" 不是数字，解析错误
    sscanf ( sentence , "%s%s%s%s" , a , b , c, d ) ;
    printf ("%s\n" , a ) ;
    printf ("%s\n" , b ) ;
    printf ("%s\n" , c ) ;
    printf ("%s\n" , d ) ;
    printf ("%f\n" , i ) ;
}