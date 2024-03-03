#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{ int a[20];
int a[0]=0;
int a[1]=1;
a[n-1]=a[n-2]+a[n-3];
    if(n==1) return a[0];
    else if(n==2) return a[1];
    else return fibonacci(n-1); }
int main() {
	int t,i;
	int k[20];
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i]); }
	for(i=1;i<=t;i++) {
	    printf("%d\n",fibinacci(k[i]); }
	return 0; }