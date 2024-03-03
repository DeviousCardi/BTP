#include <stdio.h>
#include <stdlib.h>
     int fib(int n) {
     if(n==0 || n==1) {
        return n; }
     else {
         return fib(n-1) + fib(n-2); } }
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d\n",fib(i));
	return 0; }