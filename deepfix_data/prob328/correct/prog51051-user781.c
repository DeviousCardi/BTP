#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-1)+fib(n-2); }
int main() {
	int A[50],B[50],i,t,n,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%d",&A[i]);}
	for(i=0;i<20;i++)
	 {  B[i]=fib(i+1); }
	 int m=0;
	 for(i=0;i<t;i++)
	 { for(j=0;j<20;j++)
	    { if(A[i]==B[j]) m++;}
	     if(m>0){printf("yes\n");}
	     else printf("no\n"); }
	return 0; }