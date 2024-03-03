#include <stdio.h>
#include <stdlib.h>
int fact(n) {
    if(n==0) return 1;
    return n*fact(n-1); }
int B(n,k) {
    if(k>n) return 0;
    if((k==0&&n==0)||k==0) return 1;
return B(n-1,k)+B(n-1,k-1); }
int main() {
    long int b;
    scanf("%d",&b);
printf("%d",fact(b));
	return 0; }