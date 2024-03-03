#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(n==1)
	printf("0");
	else{
	    if(a[0]>a[1])
	    printf("0");
	    else
	    if(a[n-1]>a[n-2])
	    printf("%d",n-1);
	    else
	    for(i=0;i<n;i++){
	        if(a[i]>a[i-1] && a[i]>a[i+1])
	        printf("%d",i); } }
	return 0; }