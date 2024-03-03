#include <stdio.h>
#include <stdlib.h>
int fabi(int k,int m,int j,int sum)
{   if(j<=k)
    {sum=sum+m;
    return fabi(k,m=sum,j++,sum);}
    if(j>k)
    {return sum;} }
int main() {int t,i;
	scanf("%d",&t);
	int k,f;
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    f=fabi(k,0,1,1);
	    printf("%d\n",f); }
	return 0; }