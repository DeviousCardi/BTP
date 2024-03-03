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
    int i,j;
    long int b;
    scanf("%ld",&b);
    for(i=0;i<=20;i++) {
        for(j=0;j<=20;j++) {
            if(i<j) {
                break; }
            if(binomial(i,j)==b)
            printf("%d %d",i,j); } }
	return 0; }