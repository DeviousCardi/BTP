#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,j,e;
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=1;j<=t;j++) {
	     scanf("%d",&e);
	     if(e!=0&&e!=n-1) {
	     if((a[e]>a[e-1])&&(a[e]>a[e+1])) {
	     printf("Yes\n"); }
	  else {
	      printf("No\n"); } }
	 else {if(e==0&&a[0]>a[1])
	 printf("Yes\n");
	 else
	 printf("No\n");
	 if(e==n-1&&a[n-1]>a[n-2])
	 printf("Yes\n");
	 else
	 printf("No\n"); } }
	return 0; }