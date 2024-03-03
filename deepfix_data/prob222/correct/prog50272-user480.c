#include <stdio.h>
int main() {
    float a,b,c,x,y,z,A,B,C;
    scanf("%f%f%f", &a, &b, &c);
    scanf("%f%f%f", &x, &y, &z);
    A=a*40/50+x*60/100;
    B=b*40/50+y*60/100;
    C=c*40/50+z*60/100;
    if((A>=B && B>=C)||(C>=B && B>=A))
     {printf("%.2f", B);}
    else if((B>=C && C>=A)||(A>=C && C>=B))
     {printf("%.2f", C);}
    else
     {printf("%.2f", A);}
	return 0; }