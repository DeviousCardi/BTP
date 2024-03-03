#include <stdio.h>
int main() {
    float a,b,c,x,y,z,A,B,C;
    scanf("%f %f %f", &a, &b, &c);
    scanf("%[^\n] %f %f %f", &x, &y, &z);
    A=a*40/50+x*60/100;
    B=b*40/50+y*60/100;
    C=c*40/50+z*60/100;
    if(A>B && B>C)
     {printf("%f", &B);}
    else if(B>C && C>A)
     {printf("%f", &C);}
    else
     {printf("%f", &A);}
	return 0; }