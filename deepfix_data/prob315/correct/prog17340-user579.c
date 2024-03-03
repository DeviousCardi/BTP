#include <stdio.h>
#include <stdlib.h>
int main() {
	int sum=0,n,i,j,temp,a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<1000;i++)
	b[i]=0;
	for(i=0;i<n;i++) {
	    if(i<j && a[i]>a[j]) {
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	        b[i]=b[i]+1; } }
	for(i=0;i<n;i++) {
	 sum=sum+b[i]; }
	printf("%d\n",sum);
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
		return 0; }