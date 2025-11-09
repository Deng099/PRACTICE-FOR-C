//字符串
#include <stdio.h>
#include <string.h>
void attach ( char arr[100] ) ;
int main()
{
    char str[100]  = "hello , world. ";
    attach ( str ) ;
    printf ("%s" , str ) ;
}

void attach ( char arr[100] )
{
    strcat ( arr , "Add a string." ) ;
}