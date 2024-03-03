#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0)
    return 1;
    else if(n>0)
    for(i=1;i<=n;i++) {
        sum+=catalan(i)*catalan(n-1-i); }
    return sum; }
int main() {
    printf("%d", catalan(1));
	return 0; }