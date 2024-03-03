#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	float b;
	float c;
	scanf("%f%f%f",&a,&b,&c);
	if ((a+b<=c)||(b+c<=a)||(c+a<=b))    {
	    printf("Cannot form a Triangle"); }
	else if
	((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
	    {printf("Right triangle"); }
	else    {
	    printf("Not Right Triangle"); }
    return 0; }