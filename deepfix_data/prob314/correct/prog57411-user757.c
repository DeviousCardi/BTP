#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,j,i,arr[20];
	scanf("%d",&n);
	i=0;
	while(i<n)
	{ scanf("%d",&arr[i]);
	  i++; }
	scanf("%d",&t);
	i=0;
	while(i<t)
	{ scanf("%d",&j);
	  if(arr[j]<arr[j-1]&&arr[j]<arr[j+1])
	   printf("Yes\n");
	  else
	   printf("No\n");
	  i++; }
	return 0; }