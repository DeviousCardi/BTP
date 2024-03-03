#include <stdio.h>
#include <stdlib.h>
int fib(int);
int main() {
    int t,i,flag,j;
    int arr[100];
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<t;i++) {
    for(j=0;j<20;j++) {
        if(arr[i]==fib(j))
        flag=1; }
    if(flag==1)
    printf("yes");
    else
    printf("no"); }
	return 0; }
int fib(int n) {
    if(n<=1)
    return n;
    else
    return(fib(n-1)+fib(n-2)); }