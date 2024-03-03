#include <stdio.h>
int main() {
    float a,b,c,A,B,C;
    float x,y,z;
    scanf("%f %f %f/n",&a,&b,&c);
    scanf("%f %f %f",&x,&y,&z);
    A=a*40/50+x*60/100;
    B=b*40/50+y*60/100;
    C=c*40/50+z*60/100;
    if((A>B && B>C) || (C>B && B>A))
    printf("Median weighted score=%.2f",B);
    else if((C>A && A>B) || (B>A && A>C))
    printf("Median wieghted score=%.2f",A);
	else
	printf("Median weighted score=%.2f",C);
	return 0; }