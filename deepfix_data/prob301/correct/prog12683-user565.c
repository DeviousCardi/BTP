#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int n;
	int max=0;
	int count=1;
    int arr[10000];
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&arr[i]); }
	for(i=0;i<n;i=i+1) {
	    if(arr[i]==arr[i+1])
	    count=count+1;
	    if(count==max)
	    printf("%d",arr[i]); }
	if(count>max)
	max=count;
	printf("%d",max);
	return 0; }