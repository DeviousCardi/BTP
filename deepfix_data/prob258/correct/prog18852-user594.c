#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[i];
	scanf("%d",&n);
	i=0;
	while(i<n){
	scanf("%d",&a[i]);
		scanf("%d",&a[i+1]);
	if (a[i]>a[i-1]&&a[i]>a[i+1])
	{printf("Yes");}
	else {printf("No");}
	i=i++;}
	return 0; }