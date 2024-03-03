#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,A,B,C;
	scanf("%d%d%d",&a,&b,&c);
	A=a*a;
	B=b*b;
	C=c*c;
	if ((a+b)>c && (a+c)>b && (b+c)>a) {
	    if ((A+B)>C && (B+C)>A && (A+C)>B)
	    { printf("Acute Triangle"); }
	    else
	    { printf("Not Acute Triangle"); } }
	else
	{ printf("Cannot form a Triangle"); }
	return 0; }