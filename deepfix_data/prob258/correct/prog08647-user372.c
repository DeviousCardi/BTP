#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,c=0;
	scanf("\n%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
	    scanf("\n&d",&a[i]); }
	for (i=0;i<n;i++) {
	      if (i==0) {
	        if (a[i]>a[i+1])
	       { printf("Yes2"); break;}
	       else
	       c=c+1; }
	    else if(i>0 && i<n-1) {
	       if(a[i]>a[i-1] && a[i]>a[i+1])
	       {printf("Yes1");break;}
	       else
	       c=c+1; }
	   else if (i==n-1) {
	       if (a[i]>a[i-1])
	       {printf("Yes3");break;}
	       else
	       c=c+1; }
	   if(c==n)
	   printf("No"); }
	return 0; }