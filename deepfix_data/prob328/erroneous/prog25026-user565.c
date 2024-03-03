#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main() {
    int t,i;
    int arr[100];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<t;i++) {
        if(fib(arr[i]==1)
        printf("yes");
        else
        printf("no"); }
int fib(int n) {
    if(n<=1)
    return n;
    else
    return(fib(n-1)+fib(n-2)); }
	return 0; }