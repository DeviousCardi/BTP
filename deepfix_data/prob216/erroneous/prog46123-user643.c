#include <stdio.h>
#include <stdlib.h>
int main() {
int fib(n){
    if ((n==0)||(n==1))
    return 0;
    else
    return fib(n-1)+fib(n-2); }
int x[20];
for(i=0;i<20;i++){
    y=fib(x[i]);
    printf("%d",y); }
	return 0; }