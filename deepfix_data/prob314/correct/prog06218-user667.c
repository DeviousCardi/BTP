#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,size,t,a[20],n;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	 scanf("%d",&a[i]);
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    if(n==0)
	     {if(a[0]<a[1])
	      printf("Yes\n");
	      else
	       printf("No\n"); }
	    else if(n==size) {
	         if(a[n]<a[n-1])
	          printf("Yes\n");
	         else
	          printf("No\n"); }
	     else {
	         if(a[n]<a[n-1] && a[n]<a[n+1])
	          printf("Yes\n");
	         else
	          printf("No\n"); } }
	return 0; }