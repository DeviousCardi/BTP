#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	long int a[1000],x,y,b[1000],n,m,c[1000];
	scanf("%ld %ld %ld %ld\n",&n,&m,&x,&y);
	int i=1,j=1,count=0,flag=0;
	for(;i<=n;i++)
	scanf("%ld\n",&a[i]);
	for(;j<=m;j++)
	scanf("%ld\n",&b[j]);
	for(i=1;i<=n;i++)
	{for(j=1;j<=m;j++)
	{if(a[i]-x<=b[j]&&b[j]<=a[i]+y)
	{c[i]=j;
	count++;
	flag=1;
	k=j;
	b[j]=LONGINT_MIN;
	break;}}
	if(flag==0)
	c[i]=0; }
	printf("%d\n",count);
	for(i=0;i<n;i++)
	{if(c[i]!=0)
	printf("%d %ld\n",i,c[i]);}
	return 0; }