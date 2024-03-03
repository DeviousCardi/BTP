#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n;
	int arr[n],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	if(arr[i]==arr[i+1])
	printf("%d",i);
	else
	printf("mode doesnt exist");
	return 0; }