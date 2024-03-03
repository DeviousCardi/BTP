#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	if((a[0]>a[1])||(a[n]>a[n-1]))
	printf("Yes");
	else
	printf("No");
	return 0; }