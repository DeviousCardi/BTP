#include <stdio.h>
#include <stdlib.h>
M(int k) {
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
	    printf("%d",M(k)); }
	return 0; }