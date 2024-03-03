#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
     if(n<k) return 0;
     if(k==0) return 1;
     else  return B(n-1,k)+B(n-1,k-1); }
int main() {
	int b,n,k,flag=0;
	scanf("%d",&b);
	for(n=0;n<21;n++) {
	    if(flag==1) break;
	for(k=0;k<21;k++)
	 if(b==B(n,k)) {
	     flag=1; printf("%d %d",n,k); break;} }
	 if(flag==0) printf("-1");
	return 0; }