#include <stdio.h>
#include <stdlib.h>
int fabi(int k,int m,int j,int sum)
{   if(j<k)
    {sum=sum+m;
    return fabi(k,m=sum,j++,sum);}
    if(j==k)
    {return sum;}
    else
    return 0; }
int main() {int t,i;
	scanf("%d",&t);
	int k;
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    printf("%d",k); }
	return 0; }