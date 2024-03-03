#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;int b;int c;
	scanf("%d %d %d",&a,&b,&c);
	int maxi=fmax(a,b,c);
	int sum=a+b+c;
	int diff=sum-maxi;
	if(diff<=maxi||a<=0||b<=0||c<=0)
	printf("Cannot form a Triangle");
	else {
	int mini=fmin(a,b,c);
	int diff1=sum-maxi-mini;
	int minsq=mini*mini;
	int maxsq=maxi*maxi;
	int diff1sq=diff1*diff1;
	if(maxsq==minsq+diff1sq)
	printf("Right triangle");
	else
	printf("Not Right Triangle")
	return 0; } }