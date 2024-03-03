#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,y,i,j,sum=0.0;
	int n;
	scanf("%lf %lf", &a,&b);
	scanf("%d",&n);
	double arr[n];
	y=(b-a)/n;
	j=0;
	for(i=a;i<=b;i=i+y) {
	    arr[j]=i;
	    double f= -(arr[j]*arr[j]) + 3*arr[j];
	    double g= 2*(arr[j]*arr[j]*arr[j]) - (arr[j]*arr[j]) - 5*(arr[j]);
	    if(f>g)sum=sum + (f-g)*y;
	    else sum=sum + (g-f)*y;
	    j++; }
	printf("%lf",sum;)
	return 0; }