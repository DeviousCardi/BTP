#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int A=a*a;
    int B=b*b;
    int C=c*c;
    if ((a+b<=c)||(a+c<=b)||(b+c<=a)){
        printf("Cannot form triangle"); }
    else if((A+B==C)||(A+C==B)||(B+C==A)){
        printf("Right Triangle"); }
        else
        printf("Not Right Tringle");
	return 0; }