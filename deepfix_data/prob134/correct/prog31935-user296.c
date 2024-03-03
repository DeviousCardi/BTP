#include <stdio.h>
#include <stdlib.h>
   int b;
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    if(fact(n)/(fact(k)*fact(n-k))==1)
    return k=0;
    else if(fact(n)/(fact(k)*fact(n-k))==b) ;
    printf("%d %d",n,k);
    return (fact(n-1)/(fact(k-1)*fact(n-k))); }
int main() {
    scanf("%d",&b);
    int n=b,k=b;
    B(n,k);
	return 0; }