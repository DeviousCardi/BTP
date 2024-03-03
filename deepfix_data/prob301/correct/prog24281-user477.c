#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,count;
	scanf("%d\n",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	i=0,count=0;
	for(j=i+1;j<n;j++)
	    {if(arr[i]==arr[j])
	        {count++;i++;continue;}
	       else if(arr[i]!=arr[j])
	       if(count>1)
	       i=i+1; }
	    printf("%d",*arr);
	return 0; }