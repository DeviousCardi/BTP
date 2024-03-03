#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, a[21], x, t;
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
	    scanf("%d\n",&a[i]);
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&x);
	    if(x==0) {
	        if(a[x]>a[x+1])
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	    else if(x==n-1) {
	        if(a[x]>a[x-1])
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	    else {
	        if(a[x]>a[x-1] && a[x]>a[x+1])
	            printf("Yes\n");
	        else
	            printf("No\n"); } }
	return 0; }