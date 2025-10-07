//求某个函数的零点or求根
//二分法
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x)
{
    return x*x*x -3*x +1;
}
#define SMALL 1e-6
int main()
{   
    double left=1.0;    
    double right=2.0;    
    printf( "f(%.6lf)=%.6lf\n", left, f(left));
    printf( "f(%.6lf)=%.6lf\n", right, f(right));
    while (fabs(left - right)>=SMALL)    
        {        
            double middle = (left+right)/2;
            if ( f(middle) * f(right)>0 )//和right同号
                right = middle;        
            else            left = middle;    
        }    
        double ret = (left+right)/2;
        printf( "f(%.6lf)=%.6lf\n", ret, f(ret));
        return 0;
}