#include <stdio.h>
#include <stdlib.h>
int toh(int n) {
    if(n<=1)
     return n;
    else
     return 2*toh(n-1)+1; }
int main() {
	int n,k,j,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    n=0;
	    for(j=0;n<k;j++) {
	       n=toh(j); }
	    if(n==k)
	     printf("yes");
	    else
	     printf("no"); }
	return 0; }