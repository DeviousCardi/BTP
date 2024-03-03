#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n;
	int ch;
	       scanf("%d",&n);
	       scanf("%d",&ch);
	 for(i=0;i<n;i++)
	        arr[i]=ch;
	        scanf("%d",&ch);
	       if(n>1)
	          if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1])) {
	              printf("Yes"); }
	          else{
	              printf("No"); }
	return 0; }