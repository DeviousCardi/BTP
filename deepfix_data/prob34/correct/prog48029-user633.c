#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,num,t;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	  {scanf("%d",&arr[i]); }
	scanf("%d",&t);
	int test[t];
	for(i=0;i<t;i++)
	  {scanf("%d",&test[i]); }
	for(i=0;i<t;i++) {
	    num=test[i];
	    if((arr[num]>arr[num-1])&&(arr[num]>arr[num+1]))
	        printf("Yes");
	    else
	        printf("No"); }
	return 0; }