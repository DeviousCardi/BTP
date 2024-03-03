#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n==0)
    return 1;
    else
    return ((4*n+2)*c(n-1))/(n+2); }
int main() {
    int a[10],t,i,j;
    int sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%d",&a[i]);
	sum=0;
	for(j=1;j<=a[i];j++)
	{sum=sum+c(j);}
	printf("%d\n",sum); }
	return 0; }