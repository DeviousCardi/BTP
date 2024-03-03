#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,n;
	int j,k,t;
	scanf("%d\n",&n);
	int a[i];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	if(n==1) {
	    printf("Yes"); }
	else
	scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	   	 scanf("%d\n",&k);
	    if(k==0) {
	        if(a[0]>a[1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	       if(k==n-1) {
	      if(a[n-1]>a[n-2])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	   else if(k>0&&k<n-1) {
	    if(a[k]>a[k-1]&&a[k]>a[k+1])
	        printf("Yes\n");
	       else
	        printf("No\n"); } }
	return 0; }