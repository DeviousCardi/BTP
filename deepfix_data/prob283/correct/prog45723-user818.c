#include <stdio.h>
#include <stdlib.h>
int akr(m,n) {
    if(m==0)
    return n+1;
    else if(n==0)
    return akr(m-1,1);
    else
    return akr(m-1,akr(m,n-1)); }
int main() {
	int t;
	int i,m,n,acker;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d%d",&m,&n);
	    acker=akr(m,n);
	    printf("%d\n",akr); }
	return 0; }