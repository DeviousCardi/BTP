#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
int a[20];
int i=0;
a[0]=0;
a[1]=1;
a[i]=a[i-1]+a[i-2];
   if(i==n-1) return a[i];
   return fibonacci(n-1); }
int main() {
	int t,i;
	int k[20];
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=1;i<=t;i++) {
	    printf("%d\n",fibonacci(k[i])); }
	return 0; }