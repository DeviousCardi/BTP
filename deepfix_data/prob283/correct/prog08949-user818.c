#include <stdio.h>
#include <stdlib.h>
int ack(m,n) {
    if(m==0)
    return n+1;
    else if(n==0)
    return ack(m-1,1);
    else
    return ack(m-1,ack(m,n-1)); }
int main() {
	int t;
	scanf("%d",&t);
	int i,m,n,acker;
	for(i=1;i<=t;i++) {
	    scanf("%d%d",&acker);
	   acker=ack(m,n);
	    printf("%d\t",m,n); }
	return 0; }