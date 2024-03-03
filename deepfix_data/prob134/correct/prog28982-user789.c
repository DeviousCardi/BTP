#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int i,j,b;
    scanf("%d",&b);
    for(i=1;i<=20;i++) {
        for(j=1;j<=20;j++) {
            if(binomial(i,j)==b)
            printf("%d %d",i,j); {
                break; } } }
	return 0; }