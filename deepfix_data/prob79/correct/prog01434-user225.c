#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,k,j,f,sum;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<n;i++)
	    sum=sum+a[i];
	printf("%d\n",sum);
	k=0;
	j=0;
	f=0;
	for(i=0;i<n;i++) {
	    k=k+a[i];
	    j=j+a[n-1-i];
	    if(k>=j && k+j>=sum)
	        {   f=i;
	            break;  } }
	printf("%d %d",f,n-f);
	return 0; }