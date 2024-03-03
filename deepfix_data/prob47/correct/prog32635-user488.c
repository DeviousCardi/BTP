#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n==0)
    return 1;
    else
    return ((4*n+2/n+2)*c(n-1)); }
int main() {
    int a[10],t,i,j;
    int sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%d",&a[i]);
	for(j=0;j<a[i];j++)
	{sum=sum+c(j);}
	printf("%d\n",sum); }
	return 0; }