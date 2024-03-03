#include <stdio.h>
#include <stdlib.h>
int binomial(int b,int n,int k) {
    if(n>20||k>20)
    printf("-1");
    if(binomial(b,n+1,k)+binomial(b,n+1,k+1)==b)
    printf("%d %d",n,k); }
int main() {
    int b;
    scanf("%d",&b);
    binomial(b,0,0);
	return 0; }