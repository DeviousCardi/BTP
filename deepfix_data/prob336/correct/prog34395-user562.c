#include <stdio.h>
#include <stdlib.h>
int main() {
	float a,b,c,max;
	scanf("%f %f %f",&a,&b,&c);
	max=a;
	if(b>a) {
	    max=b;
	    if(c>b)
	            max=c; }
	else if (c>a)
	    max=c;
	return 0; }