#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,count;
	scanf("%d\n",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{   count=0;
	    for(j=i+1;j<n;j++)
	    {if(arr[i]==arr[j])
	        {count++;i++;continue;}
	       else if(arr[i]!=arr[j])
	       break; } }
	printf("%d",&arr[i]);
	return 0; }