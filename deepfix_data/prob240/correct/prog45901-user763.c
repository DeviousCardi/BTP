#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    return 1;
    else if(n>0)
    for(i=0;i<n;i++) {
        sum=sum+catalan(i)*catalan(n-i); }
    return sum; }
int main() {
    printf("%d", catalan(2));
	return 0; }