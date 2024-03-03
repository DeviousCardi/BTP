#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*T,i,ctr1=0,ctr2=0,sum1=0,sum2=0;
	scanf("%d",&n);
	T=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d ",T+i);
	for(i=0;i<n/2;i++)
	{   sum1+=*(T+i);
	    sum2+=*(T+n-i-1);
	    if(sum1>sum2)
	    ctr2++;
	    else if(sum2>sum1)
	    ctr1++;
	    else if(sum1==sum2) {
	        ctr1++;
	        ctr2++; } }
	printf("%d %d",ctr1,ctr2);
	return 0; }