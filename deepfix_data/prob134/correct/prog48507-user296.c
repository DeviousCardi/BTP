#include <stdio.h>
#include <stdlib.h>
   int b;
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    if((k==0&&n==0)||k==0) return 1;
    else if(fact(n)/(fact(k)*fact(n-k))==b) ;
    printf("%d%d",n,k);
    return (fact(n-1)/(fact(k-1)*fact(n-k))); }
int main() {
    scanf("%d",&b);
    int n=b,k=b;
printf("%d",B(n,k));
	return 0; }