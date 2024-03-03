#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,flag=0,i,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n-1;i++) {
	    if((a[i]>(a[i+1])&&a[i]>(a[i-1])||(a[0]>a[1])||(a[n-1]>a[n-2]))
	    flag=1; }
	if(flag==1)
	printf("Yes");
	else
	    printf("No\n");
	return 0; }