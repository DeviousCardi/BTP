#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
     if (n==0)
     return 1;
     else
     return ((2*(2*n-1))/n+1)*catalan(n-1); }
int main() {
	int t,n;
	int a[100];
	scanf("%d",&t);
	int i,j;
	for(i=0;i<100;i++) {
	  a[i]=catalan(i); }
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    for(j=0;j<100;j++) {
	        if(a[j]>n)
	        printf("%d\n",a[j-1]); } }
	return 0; }