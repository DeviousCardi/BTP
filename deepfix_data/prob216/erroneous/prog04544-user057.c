#include <stdio.h>
#include <stdlib.h>
int fabi(int k,int m=0,int j=1,int sum=1)
{   if(j<k)
    {sum=sum+m;
    return fabi(k,m=sum,j++,sum)}
    if(j==k)
    {return sum;}
    else
    return 0; }
int main() {int t,i;
	scanf("%d",&t);
	int k[t],int s,m,j,sum;
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i-1]); }
	for(i=0;i<t;i++) {
	    s=k[i];
	    printf("%d\n",fabi(s,m,j,sum)) }
	return 0; }