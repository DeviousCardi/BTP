#include <stdio.h>
#include <stdlib.h>
int main() {
int t,n,i ;
scanf("%d\n",&t);
int a[t];
for(i=0;i<n;i++) {
    scanf("%d\n",&a[i]); }
int fib( int n) {
    if(n==1)
    return 0;
    else return fib(n-1)+fib(n-2); }
 for(i=0;i<n;i++) {
     printf("%d",fib(a[i])); }
	return 0; }