#include <stdio.h>
#include <stdlib.h>
int catl(int x) {
if(x==0)
 return 1;
else
 return ((catl(x-1)*2*(2*x-1))/(x+1)); }
int main()
{int j,t,i,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&k);
for(j=0;j<17;j++)
 {if(k==catl(j))
 {printf("yes\n");
 break;} }
if(j==17)
printf("no\n"); }
	return 0; }