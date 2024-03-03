#include <stdio.h>
#include <stdlib.h>
 int freq(int arr[],int val,int n)
{int i, sum=0;
    for(i=0;i<n;i++)
        if(arr[i]==val)
           sum++;
           return sum; }
int main() {
	int i,mode,max=0,val;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	for(i=n-1;i>=0;i--)
	   {val=arr[i];
	    if(freq(arr,val,n)>max)
	       {mode=val;
	       max=freq(val); } }
	   printf("%d",mode);
	   return 0; }