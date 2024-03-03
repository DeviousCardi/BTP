#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000],b[1000];
	int n,i,j,count=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        if(a[i]>a[j]&&i<j)
	        count++; }
	    b[i]=count;
	    count=0; }
	int sum=0;
	for(i=0;i<n;i++)
	sum=sum+b[i];
	printf("%d\n",sum)
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	return 0; }