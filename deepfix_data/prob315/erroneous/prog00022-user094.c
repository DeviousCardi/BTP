#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],k,b[1000],sum=0;
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	for(j=0;j<n;j++)
	{ int count=0;
	    for(k=j+1;k<n;k++) {
	        if(a[j]>a[k])
	        count=count+1; }
	    b[j]=count;
	    sum=sum+count; }
	printf("%d\n",sum);
	for(j=0;j<n;j++)
	printf("%d ",b[j]);
	return 0; }