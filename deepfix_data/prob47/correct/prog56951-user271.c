#include <stdio.h>
#include <stdlib.h>
int fact(int n){    int i,sum=1;
    if(n==0)
    return 1;
    else{
    for(i=0;i<=n;i++) {
        sum=sum*i;
    }}return sum; }
int catalan(int n ){int t;
t=fact(2*n)/(fact(n+1)*fact(n));
    if (n==0)
    return 1;
    else
    return t; }
int catalan_sum(int n){
    int i,sum=0;
    sum=sum+catalan(n);
    return catalan_sum(n-1); }
int main() {
	return 0; }