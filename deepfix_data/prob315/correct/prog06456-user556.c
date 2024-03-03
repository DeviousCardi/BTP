#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k=0;
	scanf("%d",&n);
	int a[n],c=0,b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{c=0;
	    for(j=i+1;j<n;j++) {
	        if(a[j]>a[i])
	        c++; }
	    b[i]=c;
	    if(b[i]!=0)
	    k++; }
	b[n-1]=0;
	printf("%d\n",k);
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	return 0; }