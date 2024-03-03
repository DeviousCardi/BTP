#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
     if(n<k) return 0;
     if(k==0) return 1;
     else  return B(n-1,k)+B(n-1,k-1); }
int main() {
	int b,n,i,j,k,flag=0;
	scanf("%d",&b);
	for(i=0;i<n;n++) {
	    if(flag==1) break;
	for(j=0;j<j;k++)
	 if(b==B(n,k)) {
	     flag=1; printf("%d %d",n,k); break;} }
	 if(flag==0) printf("-1");
	return 0; }