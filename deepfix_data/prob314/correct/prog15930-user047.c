#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a[20],n,i,t;
	       scanf("%d\n",&n);
	       for (i=0;i<n;i++)
	       scanf("%d\n",&a[i]);
	       scanf("%d",&t);
	       for (i=0;i<t;i++)
	       scanf("%d",&a[i]);
	       for (i=0;i<t;i++){
	           if(a[i+1]<a[i] && a[i+1]<a[i+2])
	           printf("Yes\n");
	           else
	           printf("No"); }
	return 0; }