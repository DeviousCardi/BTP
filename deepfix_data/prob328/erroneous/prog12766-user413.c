#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int main() {
    int t,a[100],count[100];
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<t;i++) {
        count[i]=0; }
    for(i=0;i<20;i++) {
        for(j=0;j<t;j++) {
            if(a[j]==fib(i))
            count[j]++;
            else
            continue; } }
    for(j=0;j<t;j++) {
        if(count[j]==0)
        printf("no");
        else
        printf("yes"); }
	return 0; }