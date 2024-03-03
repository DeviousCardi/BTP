#include <stdio.h>
int main() {
    float a,b,c,A,B,C;
    float x,y,z;
    scanf("%f %f %f/n",&a,&b,&c);
    scanf("%f %f %f",&x,&y,&z);
    A=a*40/50+x*60/100;
    B=b*40/50+y*60/100;
    C=c*40/50+y*60/100;
    if(A>B>C)
    printf("Median weighted score=%f",B);
    else if(C>A>B)
    printf("Median wieghted score=%f",A);
	else
	printf("Median weighted score=%f",C);
	return 0; }