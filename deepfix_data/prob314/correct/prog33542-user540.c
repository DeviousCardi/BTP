#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,a[20],s;
	scanf("%d\n",&n);
	   for (i=0;i<n;i++) {
	       scanf("%d\n",&a[i]); }
	   scanf("%d",&t);
	    for (i=0;i<t;i++) {
	       scanf("%d\n",&s);
	    if ((s>0)&&(s<n-1)) {
	       if ((a[i]<a[i-1]) && (a[i]<a[i+1]))
	       printf("Yes\n");
	       else
	       printf("sdNo\n"); }
	    else if (s==0) {
	        if (a[0]<a[1])
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	    else if (s==n-1) {
	        if (a[n-1]<a[n-2])
	            printf("Yes\n");
	        else
	            printf("No\n"); } }
	return 0; }