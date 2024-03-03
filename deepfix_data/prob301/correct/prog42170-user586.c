#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n;
	int arr[n],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	if(arr[i]==arr[i+1])
	printf("%d",i+1);
	else if(arr[i]=n)
	printf("%d",arr[i]);
	else
	printf("%d",0);
	return 0; }