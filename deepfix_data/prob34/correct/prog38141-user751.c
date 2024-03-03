#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j,k,n,t;
	scanf("%d",&n);
	int A[i];
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	scanf("%d",&t);
	 scanf("%d",&k);
	for(j=0;j<t;j++) {
	    if((k==0||k==n-1)&&(A[0]>A[1]||A[n-1]>A[n-2])){printf("Yes");}
	    else printf("No");
	    if(k>0&&k<n){
	    if(A[k]>A[k-1]&&A[k]>A[k+1]) {
	        printf("Yes");}
	       else
	        printf("No");
	         scanf("%d",&k); } }
	return 0; }