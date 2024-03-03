#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    {return 1;}
    return 2*(2*n-1)*catalan(n-1)/(n+1); }
int main() {
	int k,n,i,sum=0,j;
	int testcase[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{scanf("%d",&testcase[i]);}
	int a[100];
	for(i=0;i<k;i++)
	{for(j=0;j<testcase[i];j++)
	{a[j]=catalan(j);
	sum=sum+a[j];}
	printf("%d",sum);}
	return 0; }