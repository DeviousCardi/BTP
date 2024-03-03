#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
int a[30];
a[0]=0;
a[1]=1;
a[n-1]=a[n-2]+a[n-3];
if(n==1) return a[0];
if(n==0) return 0;
if(n==2) return a[1];
 a[n-1]=fibonacci(n-1)+fibonacci(n-2);
 return a[n-1]; }
int main() {
	int t,i;
	int k[20];
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=1;i<=t;i++) {
	    printf("%d\n",fibonacci(k[i])); }
	return 0; }