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
	printf("%d",i);
	else if(arr[i]=n)
	printf("%d",n);
	else
	printf("%d",0);
	return 0; }