#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[10000],n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	int mode,count=0,countmax=0;
	mode=a[0];
	count=1;
	for(i=1;i<n;i++) {
	    if(a[i]=a[i-1])
	        count++;
	    if(count>=countmax)
	    {   mode=a[i];
	        countmax=count; } }
	printf("%d",mode);
	return 0; }