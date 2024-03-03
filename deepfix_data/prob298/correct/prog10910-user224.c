#include <stdio.h>
#include <stdlib.h>
int catl(int x) {
if(x==0)
 return 1;
else
 return ((catl(x-1)*2*(2*x-1))/(x+1)); }
int main()
{int s=0,j,t,i,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&k);
for(j=0;j<17;j++)
 {s=s+catl(j); }
printf("%d",s);
s=0; }
	return 0; }