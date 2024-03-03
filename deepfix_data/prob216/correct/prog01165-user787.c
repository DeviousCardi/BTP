#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
int t,a[100],i;
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d/n",&a[i]);
    printf("%d",fib(a[i])); }
	return 0; }