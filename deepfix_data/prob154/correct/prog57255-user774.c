#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,A,A1=0,A2=0,A3=0;
	int n;
	float i;
	scanf("%lf %lf %d",&a ,&b, &n);
	if (a==b)
	printf("%.4lf",0);
	else if(a!=b) {
	    for(i=a;i<b;i=i+(b-a)/n) {
	        if(i<(-1))
	        A1=A1+1*(b-a)/n;
	        else if(i<=1&&i>=(-1))
	        A2=A2+(i*i)*(b-a)/n;
	        else if(i>1)
	        A3=A3+(i*i*i)*(b-a)/n; }
	    A=A1+A2+A3;
	    printf("%.4lf",A); }
	return 0; }