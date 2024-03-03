#include <stdio.h>
#include <stdlib.h>
int fabi(int k) {
    if(k==0)
    return 0;
    if(k==1)
    return 1;
    else
    return fabi(k-1)+fabi(k-2); }
int main() {int t,i;
	scanf("%d",&t);
	int k,f;
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	    f=fabi(k);
	    printf("%d\n",f); }
	return 0; }