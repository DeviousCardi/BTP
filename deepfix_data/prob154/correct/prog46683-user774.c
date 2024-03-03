#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,A,A1=0,A2=0,A3=0;
	int n;
	float i;
	scanf("%lf %lf %d",&a ,&b, &n);
	if (a==b)
	printf("%lf",0);
	else
	for(i=a;i<=b;i=i+(b-a)/n) {
	    if(i<(-1))
	    A1=A1+1*(b-a)/n;
	    else if(i<1&&i>(-1))
	    A2=A2+(i*i)*(b-a)/n;
	    else if(i>1)
	    A3=A3+(i*i*i)*(b-a)/n;
	    else
	    A1=0;
	    A2=0;
	    A2=0; }
	A=A1+A2+A3;
	printf("%lf",A);
	return 0; }