#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j,k,n,t;
	scanf("%d\n",&n);
	int A[i];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&A[i]); }
	scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	   	 scanf("%d\n",&k);
	    if((k==0||k==n-1)) {
	    if(A[0]>A[1]||(A[n-1]>A[n-2]))
	        printf("Yes\n");
	    else printf("No\n"); }
	    if(k>0&&k<n-1) {
	    if(A[k]>A[k-1]&&A[k]>A[k+1]) {
	        printf("Yes\n"); }
	       else
	        printf("No\n"); } }
	return 0; }