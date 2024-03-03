#include <stdio.h>
#include <stdlib.h>
int catalan(int n, int m) {
    if(n==1 || n==0)
        return 1;
    if(m==1)
        return (n+2)/2;
    else
        return (catalan(n, m-1))*(n+m-1)/(m-1); }
int main() {
	int i, t, k, m=0;
	scanf("%d", &t);
	for(i=1; i<=t; i++) {
	    scanf("%d", &k);
	    while(k<=catalan(m, m))
	        m++;
	    printf("%d\n", catalan(m, m));
	    m=0; }
	return 0; }