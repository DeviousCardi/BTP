#include <stdio.h>
#include <stdlib.h>
int B(n,k) {
    if(n<k) return 0;
    if(n==0&&k==0) return 1;
    if(k==0) return 1;
    return B(n-1,k)+B(n-1,k-1); }
int main() {
    int b,n,k;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
    for(k=0;k<=20;k++) {
        if(B(n,k)==b)
        printf("%d %d",n,k); } }
	return 0; }