#include <stdio.h>
#include <stdlib.h>
int catalan(int k) {
    if(k==0)
    return 1;
    else if(k==1)
    return 1;
    else
    return (4*k+2)*catalan(k-1)/(k+2); }
int main() {
	int t,i,k,P;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    P=catalan(k);
	    printf("%d",P); }
	return 0; }