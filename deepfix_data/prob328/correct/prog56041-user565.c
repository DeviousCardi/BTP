#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
    int t,i,flag=0,j;
    int arr[100];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&arr[i]); }
    for(i=0;i<t;i++) {
        flag=0;
    for(j=0;j<20;j++) {
        if(arr[i]==fib(j))
        flag=1; }
    if(flag==1)
    printf("yes\n");
    else
    printf("no\n"); }
	return 0; }
int fib(int n) {
    if(n<=1)
    return n;
    else
    return(fib(n-1)+fib(n-2)); }