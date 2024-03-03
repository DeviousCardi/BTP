#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sp,splim=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    printf("*");
	    splim=(i<=((n/2)+1))?((i-2):(n-i-2));
	    for(sp=1;sp<=splim;sp++) {
	        printf(" "); }
	    if(i!=1 && i!=n)
	    printf("*");
	    printf("\n"); }
	return 0; }