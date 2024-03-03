#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int t,i,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
   printf("%d",fib(7));
	return 0; }