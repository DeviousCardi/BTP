#include <stdio.h>
#include <stdlib.h>
int main() {
		int n=0,i,e=0,p=0;
	        scanf("%d",&n);
	int a[n];
	    for(i=0;i<n;i++)
	        scanf("%d", &a[i]); {
	        scanf("%d", &e);
	        if (a[e]>a[e-1]&&a[e]>a[e+1])
	        printf("Yes");
	        else
	        printf("No"); } {
	        scanf("%d", &p);
	        if (a[p]==a[p-1]||a[p]==a[p+1])
	        printf("No");
	        else
	        printf("Yes"); }
	return 0; }