#include <stdio.h>
#include <stdlib.h>
int fabi(int k,int sum)
{   int j=1;int m=0;
    if(j<=k)
    {sum=sum+m;
    j++;
    m=sum;
    return fabi(k,sum); }
    if(j>k)
    {return sum;}
    else
    return 0; }
int main() {int t,i;
	scanf("%d",&t);
	int k,f,sum;
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    f=fabi(k,sum);
	    printf("%d\n",f); }
	return 0; }