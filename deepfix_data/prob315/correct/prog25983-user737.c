#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,sum=0;
	scanf("%d",&n);
	int a[n],count[n];
	for(i=0;i<n;i++)
	{count[i]=0;
	    scanf("%d",&a[i]); }
	 for(i=n;i>=0;i--){ {
	        for(k=i;k>=0;k--)
	        if(a[k]>a[i]) {
	            count[i]++; } }
	    sum=sum+count[i];}
	printf("%d\n",sum);
	for(i=0;i<n;i++) {
	    printf("%d ",count[i]); }
	return 0; }