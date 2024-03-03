#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==1)
        return (n+2)/2;
    else
        return catalan(n-1)*(n+n-1)/(n-1); }
int main() {
	int i, t, k, m=0;
	scanf("%d", &t);
	for(i=1; i<=t; i++) {
	    scanf("%d", &k);
	    while(k<=catalan(m))
	        m++;
	    printf("%d", catalan(m))
	    m=0; }
	return 0; }