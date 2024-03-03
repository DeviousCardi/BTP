#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k) {
    if(n<k)
    return o;
    if((n==0)&&(k==0))
    return 1;
    if(k==0)
    return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int b;
    scanf("%d",&b);
    if(b==binomial(n,k))
    printf("%d%d",n,k);
	return 0; }