#include <stdio.h>
#include <stdlib.h>
int main() {
		int n=0,i,t=0;
	        scanf("%d",&n);
	int a[n];
	    for(i=0;i<n;i++)
	        scanf("%d", &a[i]);
	            scanf("%d", &t);
	    for(i=0;i<t;i++) {
	        if (a[i]>a[i-1]&&a[i]>a[i+1])
	        printf("Yes");
	        else
	        printf("No"); }
	return 0; }