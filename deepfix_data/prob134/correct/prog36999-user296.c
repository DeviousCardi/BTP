#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    if((k==0&&n==0)||k==0) return 1;
return B(n-1,k)+B(n-1,k-1); }
int main() {
    long int b;
    scanf("%ld",&b);
printf("%d",fact(b));
	return 0; }