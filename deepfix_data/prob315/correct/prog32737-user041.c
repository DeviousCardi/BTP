#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],b[1000],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
    b[i]=0;
	for(i=0;i<n;i++) {
    	for(j=0;j<n;j++) {
           if(a[i]>a[j] && i<j)
           count=count+1;
           b[i]=b[i]+1; } }
    printf("%d \n",count);
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0; }