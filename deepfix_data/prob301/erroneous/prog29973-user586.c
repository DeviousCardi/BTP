#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	for(j=0;j<i;j++)
	scanf("%d"&arr[j]);
	if(arr[i]==arr[j])
	printf("%d",arr[i]);
	else
	printf("mode doesnt exist");
	return 0; }