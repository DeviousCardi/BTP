#include <stdio.h>
int main() {
    double a, b, c;
    a=2.0 ;
    b= 1.0;
    c= 2.0;
    if ((a-b)*(a-c)<=0)
    {printf("%lf", a);}
    else if ((b-a)*(b-c)<=0)
    {printf("%lf", b);}
    else if ((c-a)*(c-b)<=0)
    {printf("%lf", c);}
	return 0; }