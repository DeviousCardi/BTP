#include <stdio.h>
#include <stdlib.h>
int r(float x,float y) {
    float j;
    double a,b;
    int n;
    for(j=0.0;j<float(b-a);j=j+(b-a/n))
    {x=a+j;
    if(x<=-1)
    y=1;
    else {
        if(x>-1 && x<1)
        y=x*x;
        else
        y=x*x*x; } }
    return y; }
int main() {
	int i,n;
	float j,k;
	float sum=0;
	double a,b;
	scanf("%d%lf%lf",&n,&a,&b);
	j=b-a/n;
	k=r(float x);
	for(i=0;i<n;i++)
{	sum=sum+float(k*j); }
	printf("%.4f",sum);
	return 0; }