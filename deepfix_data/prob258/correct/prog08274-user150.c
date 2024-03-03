#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[20]={0},i,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    if (i!=0&&i!=(n-1)) {
	        if(a[i]>a[i-1]&&a[i]>a[i+1])
	        b=1; }
	    else if(a[0]>a[1])
	    b=1;
	    else if(a[n-1]>a[n-2])
	    b=1; }
	if (b==1)
	printf("Yes");
	else
	printf("No");
	return 0; }