#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if(n==0)
    return 1;if(n==1)
    return 1;
    else
    return (catalan(n-1)*(4*n+2))/(n+2); }
int main() {
	int i;
	for(i=0;i<20;i++) {
	    printf("%d\n",catalan(i));}
	return 0; }