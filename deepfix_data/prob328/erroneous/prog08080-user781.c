#include <stdio.h>
#include <stdlib.h>
int fib(int a[],int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return a[n-1]+a[n-2]; }
int main() {
	int A[50],i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	  scanf("%d",&A[i]);
	  for(n=0;n<20;n++) {
	      if (A[i]=fib(a,n)) printf("yes");
	      else printf("no") } }
	return 0; }