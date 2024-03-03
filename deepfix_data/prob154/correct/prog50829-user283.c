#include <stdio.h>
#include <stdlib.h>
int main() {
	double  a,b,subint,arr[20];
	int n,i;
	scanf("%lf""%lf""%d",&a,&b,&n);
	subint=(b-a)/n;
	arr[0]=a;
	for(i=1;i<n;i++) {
	    arr[i]=arr[i-1]+subint; }
	return 0; }