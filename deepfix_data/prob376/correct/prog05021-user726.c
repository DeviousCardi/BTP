#include <stdio.h>
#include <stdlib.h>
long cat(int n) {
    if(n==0||n==1)
        return 1;
    return (((2*n-1)*2*cat(n-1))/(n+1)); }
int main() {
	int t, k, i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++) {
	    scanf("%d\n", &k);
	    printf("%ld\n", cat(k)); }
	return 0; }