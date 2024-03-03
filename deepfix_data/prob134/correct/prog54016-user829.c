#include <stdio.h>
#include <stdlib.h>
int bnf(int m, int n) {
    if(m==0) {
        return n+1; }
    if(m>0 && n==0) {
        return bnf(m-1,1); }
    if(m>0 && n>0) {
        return bnf(m-1,bnf(m,n-1)); }
    return -1; }
int main() {
	int k,m=0,n;
	scanf("%d",&k);
	while(m<=3) {
	     n=0;
	    while(n<=5) {
	        if(k==bnf(m,n)) {
	     printf("%d %d",m ,n);
	        exit(0);
	        n++; }
	        m++; } }
	printf("-1");
	return 0; }