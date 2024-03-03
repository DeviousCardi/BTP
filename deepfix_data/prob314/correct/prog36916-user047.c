#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a[20],n,i,t,b;
	       scanf("%d\n",&n);
	       for (i=1;i<n;i++)
	       scanf("%d\n",&a[i]);
	       scanf("%d",&t);
	       for (i=1;i<t;i++)
	       scanf("%d",&a[i]);
	       b=a[i];
	           for (b=a[1];b<a[20];b++){
	           if(b<b-1 && b<b+1)
	           printf("Yes\n");
	           else
	           printf("No\n"); }
	return 0; }