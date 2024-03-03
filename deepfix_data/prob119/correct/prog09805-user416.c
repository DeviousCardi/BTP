#include <stdio.h>
#include <stdlib.h>
M(k) {
    if(k==0)
    return 1;
    else
    return 2*(M(k-1))+1;
    return 0; }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    if(k!=0)
	    printf("%d",M(k-1));
	    else
	    printf("%d",0);
	    printf("\n"); }
	return 0; }