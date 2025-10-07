#include <stdio.h>
int main()
{
    char good = '_' ;
    int done = 0 ;
    for (good = 'A'; good <= 'D';good ++)
    {
        if ((good != 'A') + (good == 'C') + (good == 'D') + (good != 'D') ==3 )
        {
            printf ("%c" , good ); 
            done = 1 ;
        }
        
    }
    if ( done == 0 )
    printf (" no result ") ;
}