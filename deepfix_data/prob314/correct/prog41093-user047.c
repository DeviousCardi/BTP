#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a[20],n,i,t,j;
	       scanf("%d\n",&n);
	       for (i=0;i<n;i++)
	       scanf("%d\n",&a[i]);
	       scanf("%d",&t);
	        for (j=1;j<t;j++){
	           if(a[j]<a[j-1] && a[j]<a[j+1])
	           printf("Yes\n");
	           else
	           printf("No\n"); }
return 0; }