#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{int r;
if(n==0 || n==1)
return 1;
else
r=cat(n-1)*((2*n-2)*(2*n-3))/(n*(n-1));
return r;
int main() {
	int t,a[80],i,j,sum=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	scanf("%d\n",&a[i]);
	i=0;
	while(i<t)
	{for(j=1;j<=a[i];j++)
	 sum=sum+cat(j);
	 printf("%d\n",sum);
	 sum=0;
	 i++;}
	return 0; }