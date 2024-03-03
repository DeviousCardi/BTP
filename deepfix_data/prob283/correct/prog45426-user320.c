#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0) {
        return n+1; }
    if(m>0&&n==0) {
     return   ackermann(m-1,1); }
    else
    return ackermann(m,ackermann(m,n-1)); }
int main() {
	int k,n,m;
	scanf("%d",&k);
	if(k==ackermann(m,n)) {
	    printf("%d %d",m,n); }
	else printf("-1");
	return 0; }